//Naive solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

int count_set_bits(int n){
    int res=0;
    while(n>0){
        // if(n%2==1){
        //     res++;
        // }
        // n=n/2;

        // or
        // if((n&1)==1){res++;}
        // n=n>>1;

        // or
        res=res+(n&1);
        n=n>>1;
    
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<count_set_bits(n);
    return 0;
}
// time complexity:O(total bits in n)
// space complexity:O(1)