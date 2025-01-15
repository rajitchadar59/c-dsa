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
            high = mid - 1;
        }
        else if (arr[mid] > element){
        

          low = mid + 1;
        }
           
    } 

 return -1;


}
int main()
{
    int arr[] ={45,25,24,23,22,21};
    int size = sizeof(arr)/sizeof(int);
    int element = 100;

int  index= binarysearch(arr ,size ,element);
if(index == -1) {
    printf("element not found");

}
else {
printf(" the index is %d" ,index);
}
     return 0;
}
