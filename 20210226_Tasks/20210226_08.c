/*Задача 8.Напишете програма, която да създаде стек (LIFO) по подобие на този
от лекция 18, който обаче да бъде реализиран с динамично
заделяне на памет съобразно желанието на потребителя с функциите
malloc(), и free(). Стека да има следните функции (следното API):
struct Stack{
int *contents;
int top;
};
Stack create(int size); void destroy(Stack s);
int pop(); void push()
int top()
int isFull(); int isEmpty(void).*/
#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int *contents;
    int top;
};

struct Stack myStack;
int myStackSize = 0;

int isEmpty(void)
{
    return (myStack.top == myStackSize);
}

int pop(void)
{
    if (!isEmpty())
    {
        int temp = myStack.contents[myStack.top];
        myStack.top++;
        return (temp);
    }
    return (-1);
}

int isFull(void)
{
    return (myStack.top == 0);
}

void push(int data)
{
    if (!isFull())
    {
        myStack.contents[myStack.top - 1] = data;
        myStack.top--;
    }
}

int main(void)
{
    printf("Please enter stack size:");
    scanf("%d", &myStackSize);
    myStack.contents = malloc(myStackSize * sizeof(int));
    myStack.top = myStackSize;
    push(5);
    push(6);
    push(7);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    free(myStack.contents);
    return 0;
}