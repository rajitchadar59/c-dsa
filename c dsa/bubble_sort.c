#include<stdio.h>
void printarray(int arr[] ,int n){

for(int i =0 ; i< n ; i++){
    printf("the element of array at index %d is : %d\n" ,i ,arr[i]);

}


}
void bubblesort(int a[] ,int n){
int temp;
int issorted =0;

for(int i =0 ; i <n-1 ; i++)  //for number of passes
{
    printf("for pass %d\n" ,i+1);
    issorted=1;

     for(int j=0 ; j<n-1-i;j++) //for comparisions
     {
       if(a[j] >a[j+1]){
        temp = a[j];
        a[j]= a[j+1];
        a[j+1] =temp;
       issorted=0;

       }

     }
     if(issorted){
        return;

     }
}    

}

int main(){
int arr[] ={1,2,3,4,5,6};
int n= sizeof(arr)/sizeof(int);

printf("print arr before sorting");

printarray(arr ,n);
bubblesort(arr ,n);
printf("print arr after sorting");
printarray(arr ,n);



return 0;
}