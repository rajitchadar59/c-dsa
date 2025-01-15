#include <stdio.h>
#include <limits.h>
#include<stdlib.h>
void printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("the element of array at index %d is : %d\n", i, arr[i]);
    }
}
int maximum(int arr[], int n)
{
    int max =INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {

            max = arr[i];
        }
    }

    return max;
}
void countsort(int arr[], int n)
{
    int i ,j;

int max = maximum(arr ,n);
int *count =(int*)malloc(max+1*sizeof(int));

   for ( i = 0; i < max+1; i++)
    {
        count[i]=0;

    }
 for ( i = 0; i <n; i++)
    {
        count[arr[i]]= count[arr[i]]+1;


    }
  
  i=0;//counter of counter array
  j=0;//counter or main array

  while (i<max+1){
if (count[i]>0){
arr[j]=i;
count[i]--;
j++;

}
else{
    i++;

}

  }

}

int main()
{
    int arr[] = {27 ,15 ,88 ,42  ,55 ,55 ,88};
    int n = sizeof(arr) / sizeof(int);

    printf("print arr before sorting");

    printarray(arr, n);
    countsort(arr, n);
    printf("print arr after sorting");
    printarray(arr, n);
    return 0;
}