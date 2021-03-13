#include <stdio.h>
int main()
{
    struct tagSTest
    {
        int m_iNum;
        float m_fRate;
        struct tagStest *test;
    };
    struct tagSTest stVar = {1, 5.5};
    struct tagSTest *pstVal = &stVar;

    stVar.m_iNum = 13;
    pstVal->m_fRate = 6.78;
    
    return 0;
}
