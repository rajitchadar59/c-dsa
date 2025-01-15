#include <stdio.h>

void printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("the element of array at index %d is : %d\n", i, arr[i]);
    }
}
void selectionsort(int arr[], int n)
{
    int indexofmin  ,temp;
    for (int i = 0; i < n - 1; i++)
    {
        indexofmin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexofmin])
            {

                indexofmin = j;
            }
        }
        //swap arr[i] or arr[indexofmin]
        temp = arr[i];
        arr[i] = arr[indexofmin];
        arr[indexofmin] = temp;
    }
}
int main()
{
    int arr[] = {3, 5, 2, 13, 12};
    int n = sizeof(arr) / sizeof(int);
    printf("before sorting\n");
    printarray(arr, n);
    selectionsort(arr, n);
    printf("after sorting\n");

    printarray(arr, n);

    return 0;
}