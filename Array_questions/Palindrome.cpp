// Check if the given input is a palindrome
/*Input : nitin  Output : yes
  Input : Rahul  Output : no
*/  
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool flag =1;
    for(int i = 0;i<n/2;i++){
        if(arr[i]==arr[n-1-i]){
            continue;
        }
        else{
            flag = 0;
            break;
        }
    }
    if(!flag){
        cout<<"no";
    }
    else{
        cout<<"yes";
    }
}