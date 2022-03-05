/*Sort the given array using bubble sort
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
    while(c<n-1){
        for(int i = 0;i<n-c-1;i++){
            if(arr[i]>arr[i+1]){
                temp = arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        c++;
    } 
    for (int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
}