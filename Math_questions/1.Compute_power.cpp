//Naive solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

int power(int n,int m){
    int res=1;
    for(int i =1;i<=m;i++){
        res = res*n;
    }
    return res;
}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<power(n,m);
    return 0;
}
// time complexity:O(n)
// space complexity:O(1)