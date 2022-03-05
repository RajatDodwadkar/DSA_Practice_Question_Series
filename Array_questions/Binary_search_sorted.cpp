/* Find the given element in an sorted array
Input :  5
         2 4 8 9 11
         9
Output : 9 found at index 3
*/
int Binarysearch(int n,int arr[],int k){
    int s=0,e=n;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            e=mid-1;
        }
        else if(arr[mid]<k){
            s=mid+1;
        }
    }
    return -1;
}

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int arr[n];
    for (int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    cout<<Binarysearch(n,arr,k);
}