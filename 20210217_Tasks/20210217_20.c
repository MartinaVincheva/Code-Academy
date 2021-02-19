/*Задача20. Напишете програма, която да създаде стек (LIFO) от 16 елемента,
който има следното API
int pop()
void push()
int top()
int isFull()
Вариация: Пробвайте с опашка(FIFO), но вече вие предложете API
и го изпробвайте в main(). */
#include <stdio.h>

#define STACK_SIZE 16
int stack[STACK_SIZE];
int stackTop = STACK_SIZE;

int isEmpty(void)
{
    return (stackTop == STACK_SIZE);
}

int pop(void)
{
    if (!isEmpty())
    {
        int temp = stack[stackTop];
        stackTop++;
        return (temp);
    }
    return (-1);
}

int isFull(void)
{
    return (stackTop == 0);
}

void push(int data)
{
    if (!isFull())
    {
        stack[stackTop - 1] = data;
        stackTop--;
    }
}

int top(void)
{
    if (!isEmpty())
    {
        return (stack[stackTop]);
    }
    return (-1);
}

int main(void)
{
    push(5);
    push(6);
    push(7);
    printf("Top %d\n", top());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    return 0;
}