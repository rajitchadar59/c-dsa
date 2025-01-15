#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int is_full(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int is_empty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return -1;
    }

    else
    {
        return 0;
    }
}
void puss(struct stack *ptr, char value)
{
    if (is_full(ptr))
    {
        printf("stack overflow can not push");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
        
    }
}
char pop(struct stack *ptr)
{
    if (is_empty(ptr))
    {
        printf("stack underflow  can not push");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top = ptr->top - 1;
        return val;
    }
}
int perenthesis_match(char *exp)
{
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {

        if (exp[i] == '(')
        {
            puss(sp, '(');
        }
        else if (exp[i] == ')')
        {
            if (is_empty(sp))
            {
                return 0;
            }
            else
            {
                pop(sp);
            }
        }
    }
    if (is_empty(sp))
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *exp = "(8*9)";

    if (perenthesis_match(exp))
    {
        printf("prenthesis mathching ");
    }
    else
    {
        printf("parethesis not match");
    }
    return 0;
}