//
#include<iostream>
#include<cmath>
#include<vector>
#include<string>

using namespace std;

int count_digits(long n){
    if(n==0){
        return 0;
    }
    return 1+count_digits(n/10);
}

int main(){
    int n;
    cin>>n;
    cout<<count_digits(n);
    return 0;
}
// time complexity:
// space complexity: