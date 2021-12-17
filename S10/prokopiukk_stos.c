#include <malloc.h>
#include <stdbool.h>
#include <stdio.h>


struct Stack
{
    int size;
    int top;
    int* tab;
};

struct Stack* crst(int size)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(stack));
    stack->tab = calloc(size, sizeof(int));
    stack->size = size;
    stack->top = -1;
    return stack;
}

void push_top(struct Stack* stack, int element)
{
    if (stack->top != stack->size - 1)
    {
        stack->top++;
        stack->tab[stack->top] = element;
    }
}

void pop(struct Stack* stack)
{
    if (stack->top != -1)
    {
        stack->size--;
        stack->tab[stack->size];
    }
}

void showstack(struct Stack* stack)
{
    for (int i = stack->size - 1; i >= 0; i--)
    {
        printf("%d ", stack->tab[i]);
    }
    printf("\n");
}

int main()
{
    struct Stack* stack = crst(10);
    for (int i = 1; i <= 10; i++)
    {
        push_top(stack, i);
    }
    showstack(stack);
    for (int i = 1; i <= 6; i++)
    {
        pop(stack);
    }
    showstack(stack);
}