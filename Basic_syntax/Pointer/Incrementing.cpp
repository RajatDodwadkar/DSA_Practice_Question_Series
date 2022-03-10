// Understanding pass by value and pass by refrence by incrementing value.

#include<iostream>
using namespace std;

void increment(int*a){
    cout<<*a+1;
}
int main(){
   int a =10;
   int*p=&a;
   increment(p);
    return 0;
}