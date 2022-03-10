//Efficient solution
// Idea : loop from 2 to sqrt(n) instead of n.
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;
void isprime(int n){
    int flag = 0;
    if(n==0||n==1){
        cout<<"No";
    }
    else{
    for(int i =2;i<=sqrt(n);i++){
        if(n%i==0){
            flag =1;
            break;        
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
// time complexity:O(sqrt(n))
// space complexity:O(1)