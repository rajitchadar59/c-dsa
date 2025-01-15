#include <stdio.h>
void printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("the element of array at index %d is : %d\n", i, arr[i]);
    }
}
void insertionsort(int arr[], int n)
{
    // loop for pases
    int key, j;

    for (int i = 1; i <= n - 1; i++)
    {

        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {12, 18, 15, 14, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    insertionsort(arr, n);
    printarray(arr, n);
    return 0;
}