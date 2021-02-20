/*Задача1. Дефиниране на структура, достъп до членове*/
#include <stdio.h>
#include <string.h>

struct tagPaper
{
    unsigned m_nBookId;
    char m_szTitle[64];
    char m_szAuthor[64];
    char m_szSubject[256];
};
int main()
{
    struct tagPaper Book1 = {123, "The art of the start 2.0", "Guy Kawasaki", "How to start a Bussiness"};
    struct tagPaper Book2;

    Book2.m_nBookId = 124;
    strcpy(Book2.m_szTitle, " Algorithms for dummies ");
    strcpy(Book2.m_szAuthor, "John Muller");
    strcpy(Book2.m_szSubject, "Algorithms for Python");

    printf("Book 1 :\n ID %d \n Title %s \n Autor %s \n Subject %s\n", Book1.m_nBookId, Book1.m_szTitle, Book1.m_szAuthor, Book1.m_szSubject);
    printf("Book 2 :\n ID %d \n Title %s \n Autor %s \n Subject %s\n", Book2.m_nBookId, Book2.m_szTitle, Book2.m_szAuthor, Book2.m_szSubject);
}