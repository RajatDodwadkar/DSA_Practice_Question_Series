//Optimum solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

void print_prime_factors(int n){
    if(n<=1)return;
    while(n%2==0){
        cout<<2<<' ';
        n=n/2;
    }
    while(n%3==0){
        cout<<3<<' ';
        n=n/3;
    }
    for(int i =5;i<=sqrt(n);i=i+5){
        {
        while(n%i==0){
            cout<<i<<' ';
            n=n/i;
            }
        while(n%(i+2)==0){
            cout<<i+2<<' ';
            n=n/(i+2);
            }
        }
    }
    if(n>3)cout<<n;
}

int main(){
    int n;
    cin>>n;
    print_prime_factors(n);
    return 0;
}
// time complexity:O(sqrt(n))
// space complexity:O(1)