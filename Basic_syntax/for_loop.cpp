//sum of n numbers
#include<iostream>
using namespace std;
int main()
{
    int n,res;
    res=0;
    cin>>n;
    for (int i = 0; i<=n;i++){
        res = res +i;
    }
    cout<<res;
    return 0;
}
