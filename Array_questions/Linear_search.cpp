/* Find the given element in array
Input :  5
         2 4 8 9 11
         9
Output : 9 found at index 3
*/
int Linearsearch(int n,int arr[],int k){
     bool flag = 0;
    for(int i =0;i<n;i++){
        if(arr[i]==k){
            return i;
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
    cout<<Linearsearch(n,arr,k);
}