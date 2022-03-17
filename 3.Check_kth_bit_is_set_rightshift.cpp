//Efficient solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

void Check_bit(int n,int k){
    if(((n>>(k-1))&1)==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    Check_bit(n,k);
    return 0;
}
// time complexity:O(1)
// space complexity:O(1)