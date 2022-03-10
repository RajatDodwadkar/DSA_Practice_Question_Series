// Understanding pass by value and pass by refrence by swapping two variables.

#include<iostream>
using namespace std;

void swap(int*a,int *b){
    int temp = *a;
    *a =*b;
    *b = temp;
}
int main(){
   int a =10 ,b=20;
   int*ap=&a;
   int*bp=&b;
   swap(ap,bp);
//    swap(&a,&b);
   cout<<"a:"<<a<<endl<<"b:"<<b;
    return 0;
}