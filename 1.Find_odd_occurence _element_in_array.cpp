//Naive solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

int find_odd(int n,int arr[]){
    for(int i=0;i<n;i++){
        int count =0;
        for(int j =0;j<n;j++){
            if(arr[i]==arr[j]){count++;}
        }
        if(count%2!=0){return arr[i];}
    }
    return 0;
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
// time complexity:O(n^2)
// space complexity:O(n^2)