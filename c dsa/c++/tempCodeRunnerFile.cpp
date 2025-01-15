#include<iostream>
using namespace std;
int & swap(int &a ,int &b);

int main(){
int a=4;
int b=5;
cout<<a<<endl;
cout<<b<<endl;

swap(a ,b)=789;


cout<<"the valure of a after call"<<a<<"the b"<<b;






return 0;
}
int & swap(int &a ,int &b){
int t;
t=a;
a=b;
b=t;

return a;



}