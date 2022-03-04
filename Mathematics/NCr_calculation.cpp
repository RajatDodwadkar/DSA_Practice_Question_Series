// Print Factorial of a number!
// Input : 6 2
// Outut : 15 (6!/((6-2)!X2!)=15)

#include<iostream>
#include<cmath>
using namespace std;

int factorial(int n){
    int res = 1;
    for(int i=1;i<=n;i++){
        res = res*i;
    }
    return res;
}

int main()
{
    int n,r,nf,rf,nr_f,res;
    cin>>n>>r;
    nf = factorial(n);
    rf = factorial(r);
    nr_f = factorial(n-r);
    res = nf/(nr_f*rf);
    cout<<res;
    return 0;
} 