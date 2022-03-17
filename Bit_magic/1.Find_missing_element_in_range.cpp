/*
 Given an array of n number that has values in range [1...n+1]. 
 Every number appears exactly once.Hemce one no is missing.
 Find the missing number.

 Input:arr[]={1,4,3}
 Output:2
 */
//solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

int find_element(int n,int arr[]){
    int res1=0;
    for(int i =0;i<n;i++){
        res1=res1^arr[i];
    }
    int res2=0;
    for(int j =1;j<n+1;j++){
        res2=res2^j;
    }
    return res1^res2;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    cout<<find_element(n,arr);
    return 0;
}
// time complexity:
// space complexity: