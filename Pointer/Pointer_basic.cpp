#include<iostream>
using namespace std;
int main(){
    // int a =10;
    // int *aptr = &a;
    // aptr = &a;
    // cout<<aptr<<endl;
    // cout<<*aptr<<endl;
    // cout<<&a<<endl;
    // cout<<a+1<<endl;
    // cout<<aptr<<endl;
    int arr[]={10,20,30};
    cout<<*arr<<endl;
    int *ptr= arr;
     cout<<*ptr+1;
    return 0;
}