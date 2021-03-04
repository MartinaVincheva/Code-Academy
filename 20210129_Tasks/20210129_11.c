/* Задача 11*. Напишете програма, която да премахва всички коментари в една С програма. */
#include <stdio.h>
#include <string.h>

char program[] = "/* This is my test program */\n"
                 "#include <stdio.h>\n"
                 "\n"
                 "/*\n"
                 "This is my main function\n"
                 "*/\n"
                 "int main(void) {\n"
                 "    /* For now we'll not add code here */\n"
                 "    return(0);\n"
                 "}\n"
                 "\n"
                 "/* This is the end of the program ! */\n";

/* Returns index, where comment starts */
int findCommentStart(char *str)
{
    char *tempStr = str;

    while (*tempStr)
    {
        if (*tempStr != '/')
        {
            *tempStr++;
        }
        else if (*(tempStr + 1) == '*')
        {
            return (tempStr - str);
        }
        else
        {
            *tempStr++;
        }
    }
    return (-1);
}

/* Returns index to the next char, after the comment */
int findCommentEnd(char *str)
{
    char *tempStr = str;

    while (*tempStr)
    {
        if (*tempStr != '*')
        {
            *tempStr++;
        }
        else if (*(tempStr + 1) == '/')
        {
            return ((tempStr + 2) - str);
        }
        else
        {
            *tempStr++;
        }
    }
    return (-1);
}

/* Prints 'count' characters from string */
void printTillIndex(char *str, int count)
{
    while (count)
    {
        printf("%c", *str++);
        count--;
    }
}

int main(void)
{
    char *str = program;
    int last_idx = 0, idx;

    while ((idx = findCommentStart(str)) >= 0)
    {
        /* Print program till start of comment */
        printTillIndex(str, idx);
        str += findCommentEnd(str);
    }
    return 0;
}