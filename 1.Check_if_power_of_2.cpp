//Naive solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

void check_if_power_of_two(int n){
    int res=0;
    if(n==0){cout<<"No";return;}
    while(n!=1){
        if(n%2!=0){
            cout<<"No";return;
        }
        n=n/2;
    }
    cout<<"Yes";
}

int main(){
    int n;
    cin>>n;
    check_if_power_of_two(n);
    return 0;
}
// time complexity:O(Number of bits)
// space complexity:O(1)
