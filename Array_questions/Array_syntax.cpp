// Array initialization, Transversal, insertion and deletion

#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n,pos, arr1[4]={6,7,8,9};//array declaration and initialization
    cin>>n;
    int arr2[n];//array initialization
    // reading user input into the array
    for (int i =0;i<n;i++){
        cin>>arr2[i];
    }
    // printing array elements
    for (int i =0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    // array insertion
    arr1[2]=5;//inserting 5 at 3rd index of array
    cout<<arr1[2]<<endl;

    // deleting 5 from arr1
    for(int i=0;i<4;i++){
        if(arr1[i]==5){
            pos =i;
        }
    }
    for(int j=pos;j<4;j++){
        arr1[j]=arr1[j+1];
    }
    for(int k=0;k<4;k++){
        cout<<arr1[k]<<' ';
    }
}