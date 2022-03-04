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
    if(i<<2 > j){
        cout<<i<<" "<<j;
    }
    return 0;
}

