#include<stdio.h>
void printarray(int arr[], int n)
{ 

    for (int i = 0; i < n; i++)
    {
        printf("  %d\t",  arr[i]);
    }
}

void merge(int a[] ,int low , int mid , int high){
int i , j ,k , b[100];
i=low;
j=mid+1;
k=low;
while(i<=mid &&j<=high) {
  if (a[i]<a[j]){
b[k]=a[i];
k++;
i++;

  }
  else{
b[k]=a[j];
k++;
j++;


  }

}
while(i<=mid){
    b[k]=a[i];
    i++;
    k++;

}
while(j<=high){
 b[k]=a[j];
    j++;
    k++;

}
for(int i =0 ; i<= high ; i++){

    a[i]=b[i];
    
}
}
void mergesort(int low , int high ,int a[]){
 if (low <high){
int mid =(low+high)/2;
    mergesort(low ,mid , a);
    mergesort(mid+1 ,high , a);
    merge(a ,low ,mid ,high);

 }





}
int main(){
int arr[] = {3, 5, 2, 13, 12 ,13 ,100 ,45, 1000};
    int n = 9;
    printarray(arr, n);
     mergesort(0 ,n-1 ,arr);
  
   printf("after sorting\n");

    printarray(arr, n);

return 0;
}