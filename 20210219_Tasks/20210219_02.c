/*Задача2.Инициализиране на структура, вложени структури*/
#include <stdio.h>
#include <string.h>

struct tagDetail
{
    unsigned m_uAcadId;
    char m_szAcadName[BUFSIZ];
    char m_szAcadUrl[BUFSIZ];
};
struct tagCadet
{
    unsigned m_uCadetId;
    char m_CadetName[BUFSIZ];
    float m_uAverageRating;
    struct tagDetail m_detail;
};

int main()
{
    struct tagCadet cadet = {1, "Ivan Ivanov", 5.52, {13, "Code Academy", "https://codeacademy.bg"}};

    printf("Cadet Id is: %d\n", cadet.m_uCadetId);
    printf("Name is: %s\n", cadet.m_CadetName);
    printf("Rating (2-6) is: %f\n", cadet.m_uAverageRating);
    printf("Academy Id is: %d\n", cadet.m_detail.m_uAcadId);
    printf("Name is: %s\n", cadet.m_detail.m_szAcadName);
    printf("URL is: %s\n", cadet.m_detail.m_szAcadUrl);
    printf("\n");
    struct tagCadet cadet1 = {2, "Georg Koers", 4.20, {14, "Code Academy", "https://codeacademy.bg"}};
    printf("Cadet Id is: %d\n", cadet1.m_uCadetId);
    printf("Name is: %s\n", cadet1.m_CadetName);
    printf("Rating (2-6) is: %f\n", cadet1.m_uAverageRating);
    printf("Academy Id is: %d\n", cadet1.m_detail.m_uAcadId);
    printf("Name is: %s\n", cadet1.m_detail.m_szAcadName);
    printf("URL is: %s\n", cadet1.m_detail.m_szAcadUrl);
    return 0;
}