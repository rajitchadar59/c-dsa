#include<stdio.h>
void arry_traversal(int arr[] ,int size) {
for (int i = 0 ; i <size ; i++) {

printf("%d \n" ,arr[i]);



}

}
int main() {
int arr[] ={1,2,3,4,5};
int size = sizeof(arr)/sizeof(int);


arry_traversal(arr ,size);



    return 0;

}