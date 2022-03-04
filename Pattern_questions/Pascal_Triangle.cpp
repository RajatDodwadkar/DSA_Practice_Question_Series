/*
Print the following pattern
Input : n=5
Output :
 1(0C0)            same for all number (iCj)
 1 1
 1 2 1
 1 3 3 1
 1 4 6 4 1
*/
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

int NCr(int n, int r)
{
    int nf,rf,nr_f,res;
    nf = factorial(n);
    rf = factorial(r);
    nr_f = factorial(n-r);
    res = nf/(nr_f*rf);
    return res;
} 
int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<NCr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}