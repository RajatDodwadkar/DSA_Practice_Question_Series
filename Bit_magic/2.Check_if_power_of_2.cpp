//Efficient solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

void check_if_power_of_two(int n){
    int res=0;
    if(n==0){cout<<"No";return;}
    if((n&(n-1))==0){
        cout<<"Yes";
        }
    else{
        cout<<"No";
        }
}

// or
// bool check_if_power_of_two(int n){
//     return ((n!=0)&&((n&(n-1))==0));
// }

int main(){
    int n;
    cin>>n;
    check_if_power_of_two(n);
    // cout<<check_if_power_of_two(n);
    return 0;
}
// time complexity:theta(1)
// space complexity:O(1)