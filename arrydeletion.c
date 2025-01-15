#include <stdio.h>
void display(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int deletion(int arr[], int size, int index)
{

    for (int i = index; i < size - 1; i++)
    {

        arr[i] = arr[i + 1];
    }
}
int main()
{

    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5;

    int index = 2;

    deletion(arr, size, index);
    size--;

    display(arr, size);

    return 0;
}