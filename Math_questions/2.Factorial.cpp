//Recursive Method
#include<iostream>
#include<cmath>
#include<vector>
#include<string>

using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
// time complexity:theta(n)
// space complexity:theta(n)