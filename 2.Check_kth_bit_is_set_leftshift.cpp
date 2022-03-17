//Efficient solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

void Check_bit(int n,int k){
    if(n&(1<<(k-1))!=0){
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