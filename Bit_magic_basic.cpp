#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    // Bitwise And $
    cout<<(x&y)<<endl;
    // Bitwise OR |
    cout<<(x|y)<<endl;
    // Bitwise XOR ^
    cout<<(x^y)<<endl;
    // Left shift x<<y =x*pow(2,y)
    cout<<(3<<1)<<endl;
    // Right shift x>>y =x/pow(2,y)
    cout<<(3>>1)<<endl;
    // ~ negation
    unsigned int z=2;
    cout<<~z<<endl;
    signed int n=2;
    cout<<~n<<endl;
    return 0;
}