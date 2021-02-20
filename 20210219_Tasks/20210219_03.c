/*Задача 3. Указатели към структура, предаване на структура на функция по стойност и по референция*/
#include <stdio.h>
#include <string.h>

struct tagPaper
{
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};

void printPaper(struct tagPaper paper)
{
    printf("Paper id      : %d\n", paper.m_nBookId);
    printf("Paper title   : %s\n", paper.m_szTitle);
    printf("Paper author  : %s\n", paper.m_szAuthor);
    printf("Paper subject : %s\n", paper.m_szSubject);
}

void printPtrPaper(struct tagPaper *pPaper)
{
    printf("Paper id      : %d\n", pPaper->m_nBookId);
    printf("Paper title   : %s\n", pPaper->m_szTitle);
    printf("Paper author  : %s\n", pPaper->m_szAuthor);
    printf("Paper subject : %s\n", pPaper->m_szSubject);
}

int main()
{
    struct tagPaper Book1 = {123, "The art of the start 2.0", "Guy Kawasaki", "How to start a Bussiness"};
    printPaper(Book1);
    printf("\n");

    struct tagPaper Book2;
    Book2.m_nBookId = 124;
    strcpy(Book2.m_szTitle, " Algorithms for dummies ");
    strcpy(Book2.m_szAuthor, "John Muller");
    strcpy(Book2.m_szSubject, "Algorithms for Python");
    printPtrPaper(&Book2);
    return 0;
}