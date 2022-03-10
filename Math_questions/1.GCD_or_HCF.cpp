// Naive Solution
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

int gcd(int n,int m){
    int res;
    if(n<m){
        for(int i = n;i>=1;i--){
            if(n%i==0 &&m%i==0){
                res=i;
                break;
            }
        }
    }
    else{
        for(int i = m;i>=1;i--){
            if(n%i==0 &&m%i==0){
                res=i;
                break;
            }
        }
    }
    return res;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
    return 0;
}
// time complexity:O(min(n,m))
// space complexity:O(1)