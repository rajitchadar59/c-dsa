#include <stdio.h>
void display(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int insertion(int arr[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
    {
        printf("insertion not posible");
    }
    else{
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    }
}
int main()
{

    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;
    int element = 0;
    int index = 3;
    int capacity = 100;

    insertion(arr, size, element, capacity, index);
    size++;
    display(arr, size);

    return 0;
}