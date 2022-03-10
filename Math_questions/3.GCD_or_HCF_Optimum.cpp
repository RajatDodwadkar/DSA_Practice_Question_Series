// Optimum solution
// Idea : gcd(a,b)=gcd(b,a%b)
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

int gcd(int n,int m){
    if(m==0){
        return n;
    }
    else return gcd(m,n%m);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
    return 0;
}
// time complexity:O(log(min(n,m)))
// space complexity:O(1)