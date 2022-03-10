//Iterative Method
#include<iostream>
#include<cmath>
#include<vector>
#include<string>

using namespace std;
int factorial(int n){
    int res=1;
    for(int i =1;i<=n;i++){
        res=res*i;
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
// time complexity:theta(n)
// space complexity:theta(1)