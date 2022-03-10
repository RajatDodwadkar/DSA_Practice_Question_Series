// Efficient solution
// Idea : gcd(a,b)=gcd(max(a,b)-min(a,b),min(a,b))
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

int gcd(int n,int m){
    while(n!=m){
        if(n>m){
            n=n-m;
        }
        else{
            m=m-n;
        }
    }
    return n;
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
    return 0;
}
// time complexity:
// space complexity: