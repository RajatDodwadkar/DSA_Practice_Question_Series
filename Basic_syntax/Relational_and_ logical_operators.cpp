/*
== , != , >,<, >=, <=  Relational operators
&&, ||, !  Logical operators

Find if a number is divisible by 2 , 3 , both.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n%2==0&&n%3==0){
        cout<<n<<" is divisible by both 2 and 3"<<endl;
    }
    else if (n%3==0){
        cout<<n<<" is divisible by 3"<<endl;
    }
    else if (n%2==0){
        cout<<n<<" is divisible by both 2"<<endl;
    }
    else {
        cout<<n<<" is divisible by none";
    }
    return 0;
}
