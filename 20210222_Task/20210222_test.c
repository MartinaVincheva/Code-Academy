#include <stdio.h>
struct tagSTestA
{
    char m_chVallue;
    unsigned short m_usValue;
} __attribute__((packed));
struct tagSTestB
{
    char m_chVallue;
    unsigned short m_usValue;
    float m_fValue;
    double m_dValue;
} zyn;
union tagUTest
{
    int m_iNum;
    float m_fRate;
} utest;
union tagUTest1
{
    char m_Char;
    int m_iNum;
    float m_fRate;
    double m_Double;
} utest1;
enum bool
{
    false,
    true
};
enum
{
    VAL0 = 100,
    VAL1 = 200,
    VAL3 = 300,
    VALN = 19
};

int main()
{
    printf("Size of tagStestA = %d bytes\n", sizeof(struct tagSTestA));
    printf("Size of tagStestB = %d bytes\n", sizeof(zyn));
    printf("Size of tagUTest = %d bytes\n", sizeof(utest));
    printf("Size of tagUTest1 = %d bytes\n", sizeof(utest1));

    enum bool b = true;
    enum bool c = false;
    switch (c)
    {
    case true:
        printf("True\n");
        break;
    case false:
        printf("False\n");
        break;
    }

    int z = VAL3, y = VAL0;
    if (z < y)
        printf("%d\n", z);
    else
        printf("%d\n", y);
    return 0;
}
