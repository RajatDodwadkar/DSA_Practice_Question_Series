// Efficient solution
// Idea: a*b = gcd(a,b)*lcm(a,b)
//    lcm(a,b)=(a*b)/gcd(a,b) 

#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

int gcd(int n , int m){
    if(m==0){
        return n;
    }
    else return gcd(m,n%m);
}

int lcm(int n,int m){
    return m*n/gcd(n,m);  
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<lcm(n,m);
    return 0;
}
// time complexity:O(log(min(a,b)))
// space complexity:O(1)