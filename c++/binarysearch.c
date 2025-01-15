#include <stdio.h>
int binarysearch(int arr[], int size, int element)
{ 
    int mid, high, low;
    low =0;
    high = size-1;
  while (low <= high)
    {
    mid = (low + high) / 2;
  
        if (arr[mid] == element)
        {

            return mid; 

        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else if (arr[mid] > element){
        

            high = mid - 1;
        }
       
    } 
 return -1;


}
int main()
{
    int arr[] ={1,2,3,45,65,78,45};
    int size = sizeof(arr)/sizeof(int);
    int element = 100;

int r = binarysearch(arr ,size ,element);
printf(" the index is %d" ,r);

     return 0;
}