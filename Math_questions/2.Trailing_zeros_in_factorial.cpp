//Efficient Method
#include<iostream>
#include <limits.h>
#include<cmath>
#include<vector>
#include<string>

using namespace std;

int count_trail_zero(int n){
    int res =0;
    for(int i =5;i<=n;i=i*5){
        res=res+(n/i);
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<count_trail_zero(n);
    return 0;
}
// time complexity:theta(logn)
// space complexity:theta(1)