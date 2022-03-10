// Understanding pointer to pointer refrencing.

#include<iostream>
using namespace std;

int main(){
   int a =10;
   int*p=&a;
   int**q=&p;
   cout<<p<<endl<<*q<<endl<<**q;
//    cout<<**q<<endl;
    return 0;
}