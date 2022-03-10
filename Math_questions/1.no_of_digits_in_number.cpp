//Iterative method
#include<iostream>
#include<cmath>
using namespace std;

int count_digits(int n){
    int count =0;
    while(n>0){
        count++; 
        n=n/10;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<count_digits(n);
    return 0;
}
// time complexity:O(n)
// space complexity:O(1)