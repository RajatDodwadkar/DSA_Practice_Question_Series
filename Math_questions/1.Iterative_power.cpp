// More Efficient solution for computing power
// Idea : 3^10 = 3^8 *3^2
//        10 = 1010 
//Naive solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

int power(int n,int m){
    int res=1;
    while(m>0){
        if(m%2!=0){
            res = res*n;
        }
        n=n*n;
        m=m/2;
    }
    return res;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<power(n,m);
    return 0;
}
// time complexity:O(logn)
// space complexity:O(1)