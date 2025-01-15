#include <stdio.h>
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {

            printf("element is found the index is");
            return i;
        }

        else
            ("element is not found  ");
    }
}
int main()
{

    int arr[] = {1, 27, 6, 45, 25, 455};
    int element = 45;
    int size = sizeof(arr) / sizeof(int);

    int searchindex = linearsearch(arr, size, element);

    printf("%d", searchindex);

    return 0;
}