//Efficient solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

int count_set_bits(int n){
    int res=0;
    while(n>0){
       n=n&(n-1);
       res++;
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<count_set_bits(n);
    return 0;
}
// time complexity:O(count of set bits)
// space complexity:O(1)