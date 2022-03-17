//Efficient solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

int find_odd(int n,int arr[]){
    int res=0;
    for(int i =0;i<n;i++){
        res=res^arr[i];
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<find_odd(n,arr);
    return 0;
}
// time complexity:O(n)
// space complexity:O(1)