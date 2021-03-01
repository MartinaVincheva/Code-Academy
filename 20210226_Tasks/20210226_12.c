/*Задача 12.Представете служителите във фирма в структура с
членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в
години, заплата в лева, указател към структурата, описващ неговия
началник. Напишете програма, която въвежда 10 служителя, които се
съхраняват в масив от описаните структури. Въвеждането на служителите
може да стане на два паса, първо въвеждане на всички данни без
указателя към началника и на втори пас, указване на всеки служител кой е
неговият началник. В решението трябва да се използва динамично
заделяне на памет и typedef..*/
#include <stdio.h>
#include <stdlib.h>

typedef struct EmployeeData EmployeeData;
struct EmployeeData
{
    short int number;
    char name[20];
    char middleName[20];
    char lastName[20];
    char position[30];
    unsigned char exper;
    float salary;
    struct EmployeeData *manager;
};

float read_float(char *str)
{
    char temp[20];

    printf("%s", str);
    gets(temp);
    return (atof(temp));
}

int read_int(char *str)
{
    char temp[20];

    printf("%s", str);
    gets(temp);
    return (atoi(temp));
}

void fill_employeeData(EmployeeData *p_empl, int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("Please enter information for the employee %d:\n", i + 1);
        p_empl[i].number = read_int("Enter number of the employee:");
        printf("Enter First Name of the employee:");
        gets(p_empl[i].name);
        printf("Enter Middle Name of the employee:");
        gets(p_empl[i].middleName);
        printf("Enter Last Name of the employee:");
        gets(p_empl[i].lastName);
        printf("Enter Position of the employee:");
        gets(p_empl[i].position);
        p_empl[i].exper = read_int("Enter Experience of the employee:");
        p_empl[i].salary = read_float("Enter Salary of the employee:");
        p_empl[i].manager = NULL;
    }
}

void printEmployeeDataRow(EmployeeData *empl)
{
    printf("| %5d | %s | %s | %s | %s | %2d | %.2f |\n", empl->number, empl->name, empl->middleName,
           empl->lastName, empl->position, empl->exper, empl->salary);
}

void printEmployeeDataRowWithManager(EmployeeData *empl)
{
    printf("| %5d | %s | %s | %s | %s | %2d | %.2f | Manager: %s %s\n", empl->number, empl->name, empl->middleName,
           empl->lastName, empl->position, empl->exper, empl->salary, empl->manager->name, empl->manager->lastName);
}

void print_employeeData(EmployeeData *p_empl, int count)
{
    for (int i = 0; i < count; i++)
    {
        if (p_empl[i].manager)
            printEmployeeDataRowWithManager(&p_empl[i]);
        else
            printEmployeeDataRow(&p_empl[i]);
    }
}

void assign_manager(EmployeeData *p_empl, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("Who is the manager of:");
        printEmployeeDataRow(&p_empl[i]);
        int temp = read_int("\nPlease input manager ID here (-1 if no manager assigned):");
        for (int j = 0; j < count; j++)
        {
            if (p_empl[j].number == temp)
                p_empl[i].manager = &p_empl[j];
        }
        if (temp >= 0 && NULL == p_empl[i].manager)
            printf("Manager not found!\n");
    }
}

int main()
{
    int employeeCount = 10;
    EmployeeData *p_empl = (EmployeeData *)malloc(employeeCount * sizeof(EmployeeData));

    fill_employeeData(p_empl, employeeCount);
    assign_manager(p_empl, employeeCount);
    print_employeeData(p_empl, employeeCount);
    free(p_empl);
    return 0;
}
