#include <stdio.h>
void printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("the element of array at index %d is : %d\n", i, arr[i]);
    }
}

int partition(int arr[], int low, int high)
{
    int temp;

    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    do
    {

        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);
//swap pivot with a[j];

            temp = arr[low];
            arr[low] = arr[j];
            arr[j] = temp;
     return j;

}

void quicksort(int arr[], int low, int high)
{
    int partitionindex; // index of pivot after partition

    if (low < high)
    {
        partitionindex = partition(arr, low, high);

        quicksort(arr, low, partitionindex - 1);  // sort left subarray
        quicksort(arr, partitionindex + 1, high); // sort right subarray
    }
}
int main()
{
    int arr[] = {3, 5, 2, 13, 12 ,13 ,100 ,45, 0};
    int n = sizeof(arr) / sizeof(int);
    printarray(arr, n);
   quicksort(arr ,0 , n-1);
   printf("after sorting");

    printarray(arr, n);

    return 0;
}