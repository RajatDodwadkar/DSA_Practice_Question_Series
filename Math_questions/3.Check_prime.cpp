//Optimum solution
// Idea : check for divisibility with 2,3,4 explicitly. 
//        loop from 2 to sqrt(n) instead of n and check divisibility with i and i+2.
//        increment i by 6 for every iteration .       

#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;
void isprime(int n){
    int flag = 0;
    if(n==0||n==1||n==4||n%2==0||n%3==0){
        cout<<"No";
    }
    else if(n==2||n==3){
        cout<<"Yes";
    }
    else{
    for(int i =5;i<=sqrt(n);i=i+6){
        if(n%i==0||n%(i+2)==0){
            flag =1;break;
    }}
    if(flag) cout<<"No";
    else cout<<"Yes";
    }
}

int main(){
    int n;
    cin>>n;
    isprime(n);
    return 0;
}
// time complexity:
// space complexity:O(1)