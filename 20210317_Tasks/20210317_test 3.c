#include <stdarg.h>

int Sum(int nNumOfElem, ...)
{
    int nRet = 0; /* sum of values */
    va_list listArg;
    va_start(listArg, nNumOfElem); /* iterate agrs */
    for (int i = 0; i < nNumOfElem; i++)
    {
        int nArg = va_arg(listArg, int);
        nRet += nArg;
    }
    va_end(listArg);
    return nRet;
}
