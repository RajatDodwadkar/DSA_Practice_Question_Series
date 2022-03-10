// Naive solution
#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

int lcm(int n,int m){
    if(max(m,n)%min(m,n)==0||m==n){
        return max(m,n);
    }
    int i=max(m,n);
    while(1){
        if(i%m==0&&i%n==0){
            return i;
        }
        i++;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<lcm(n,m);
    return 0;
}
// time complexity:O(a*b-max(a,b))
// space complexity:O(1)