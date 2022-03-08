//Print transpose of  a nxn matrix .
/*
Input : 3 3         Output: 1 4 7
        1 2 3               2 5 8
        4 5 6               3 6 9
        7 8 9
*/ 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}