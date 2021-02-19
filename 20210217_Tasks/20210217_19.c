/* Задача19. Напишете програма, която да създаде стек (LIFO) от 16 елемента, който
има следното API
int pop()
void push()
int top()
int isFull() */
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

int main(void)
{
    push(5);
    push(6);
    push(7);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    return 0;
}