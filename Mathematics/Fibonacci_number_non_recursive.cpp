// Print Fibonacci sequence upto n terms (next term equal to sum of previous two terms)
// Input : 5    Output : 3  (0 1 1 2 3)
// Input : 8    Output : 13 (0 1 1 2 3 5 8 13)   

#include<iostream>
#include<cmath>
using namespace std;

int fibo(int n){
    int t_0 = 0;
    int t_1 = 1;
    int next_term;
    for(int i =1;i<n;i++){
        next_term = t_0 + t_1;
        t_0 = t_1;
        t_1 = next_term;
    }
    return t_0;
}

int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
} 