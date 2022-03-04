// Print all factors of a number
// Input : 6
// Outut : 1 2 3 (list of numbers that divide 6 completely)

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0)
            cout<<i<<" ";
        }
    return 0;
}