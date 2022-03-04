/*
Bitwise operators
 &, |, ^, ~, <<, >>
a<<n -> a*2^n
a>>n -> a/2^n

Assignment operators
 =, +=, -=, *=, /=,

Miscellaneous operators
sizeof(), Condition?x:y, cast, (,), &, *
*/
#include<iostream>
using namespace std;
int main()
{
    int i, j;
    cin>>i>>j;
//  a=i*2^2
    int a = i<<2 ;
//  b=i/2*2
    int b = i>>2 ;
    cout<<a<<" "<<b<<" "<<sizeof(i)<<
    return 0;
}

