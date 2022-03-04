// Print nth number in Fibonacci sequence (next term equal to sum of previous two terms)
// Input : 5    Output : 3  (0 1 1 2 3)
// Input : 8    Output : 13 (0 1 1 2 3 5 8 13)   

#include<iostream>
#include<cmath>
using namespace std;

int fibo(int n){
    int res = 0;
    if(n ==1){
        return 0;
    }
    if(n==2|| n==3){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
} 