//Search for a given element in the 2D array
/*
Input : 3 3         Output: found
        1 2 3
        4 5 6
        7 8 9
        7
*/
#include<iostream>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m;
    int arr[n][m];
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cin>>k;
    int flag=0;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(k==arr[i][j]){
                cout<<"found";
                flag =1;
            }
        }
    }
    if(flag==0){
        cout<<"Not found";
    }
}