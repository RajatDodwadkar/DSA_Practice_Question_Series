// Print Fibonacci sequence upto n terms (next term equal to sum of previous two terms)
// Input : 5    Output : 0 1 1 2 3 5
// Input : 8    Output : 0 1 1 2 3 5 8 13 21   

#include<iostream>
#include<cmath>
using namespace std;

void fibo_seq(int n){
    int t_0 = 0;
    int t_1 = 1;
    int next_term;
    for(int i =1;i<=n;i++){
        cout<<t_0<<" ";
        next_term = t_0 + t_1;
        t_0 = t_1;
        t_1 = next_term;
    }
}

int main()
{
    int n;
    cin>>n;
    fibo_seq(n);
    return 0;
} 