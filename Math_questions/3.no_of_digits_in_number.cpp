//Logarithmic
#include<iostream>
#include<cmath>
#include<vector>
#include<string>

using namespace std;

int count_digits(int n){
    return floor(log10(n)+1);
}

int main(){
    int n;
    cin>>n;
    cout<<count_digits(n);
    return 0;
}
// time complexity:
// space complexity: