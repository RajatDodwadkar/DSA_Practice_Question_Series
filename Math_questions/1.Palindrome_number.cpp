#include<iostream>
#include<cmath>
#include<vector>
#include<string>

using namespace std;

void isPalindrome(int n){
    int temp =0;
    int num=n;
    while(n>0){
        temp = temp*10 +(n%10);
        n=n/10;
    }
    if(temp==num){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main(){
    int n;
    cin>>n;
    isPalindrome(n);
    return 0;
}
// time complexity:Theta(d) d=no of digits
// space complexity:Theta(1)