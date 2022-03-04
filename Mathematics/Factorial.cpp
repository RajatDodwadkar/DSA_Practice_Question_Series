// Print Factorial of a number!
// Input : 6
// Outut : 720 (1x2x3x4x5x6=720)

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,res=1;
    cin>>n;
    for(int i=1; i<=n;i++){
        res = res * i;
    }
    cout<<res;
    return 0;
} 