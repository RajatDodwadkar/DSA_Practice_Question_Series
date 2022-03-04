// Reverse the given number 
// Input  : 1234
// Output : 4321

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,last_digit;
    int res =0;
    cin>>n;
    while(n>0){
        last_digit = n%10;
        res = res*10 + last_digit; 
        n = n/10;
    }
    cout<<res<<endl;
    return 0;   
}

