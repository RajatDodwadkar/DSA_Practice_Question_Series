/*Sort the given array using selection sort
Input: 6
       5 4 8 7 3 2
Output : 2 3 4 5 7 8
*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    int temp;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for (int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}