/*Sort the given array using insertion sort
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
    int temp,c=0;
    for(int i =1;i<n;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current&&j>=0){
            arr[j+1]=arr[j];
            j--;
            }
        arr[j+1]=current;
    }
    for (int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}