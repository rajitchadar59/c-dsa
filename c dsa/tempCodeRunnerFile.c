
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
    char pooped_ch;

    for (int i = 0; exp[i] != '\0'; i++)
    {

        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {