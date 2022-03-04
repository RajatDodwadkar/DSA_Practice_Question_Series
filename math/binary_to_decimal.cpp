#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,q,r;
    int res=0;
    int c=0;
    cin>>n;
    while(n!=0){
        r=n%10;
        res = res+r*pow(2,c);
        n = n/10;
        c=c+1;
    }
    cout<<res;
    return 0;
}
