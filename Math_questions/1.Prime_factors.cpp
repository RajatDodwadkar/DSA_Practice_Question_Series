//Naive solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

bool isprime(int n){
    int flag = 0;
    if(n==0||n==1||n==4||n%2==0||n%3==0){
        return 0;
    }
    else if(n==2||n==3){
        return 1;
    }
    else{
    for(int i =5;i<=sqrt(n);i=i+6){
        if(n%i==0||n%(i+2)==0){
            flag =1;break;
    }}
    if(flag) return 0;
    else return 1;
    }
}
void print_prime_factors(int n){
    for(int i =2;i<n;i++){ 
        if(isprime(i)){
            int x =i;
        while(n%x==0){
            cout<<i<<" ";
            x=x*i;
        }}}
}

int main(){
    int n;
    cin>>n;
    print_prime_factors(n);
    return 0;
}
// time complexity:
// space complexity: