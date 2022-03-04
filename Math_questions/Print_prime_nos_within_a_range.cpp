// Print all primes numbers within  a given range
// Input : 1 10    Outut : 2 3 5 7
// Input : 5 20    Outut : 5 7 11 13 17 19

#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int n){
    bool flag =1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag=0;
        }
    }
    return flag;
}

int main()
{
    int num1, num2;
    cin>>num1>>num2;
    for(int i =num1;i<=num2;i++){
        if(i>=2){
        if(isprime(i)){
            cout<<i<<" ";
        }
        }
    }
    return 0;
} 