/*
Print the following pattern.
 n=5
     1
    212
   32123
  4321234
 543212345

*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cin>>n;
    int m =n;
    for(int i=1;i<=n;i++){
        for(int j=m;j>=1;j--){
            cout<<" ";
        }
        for(int k=i;k>=1;k--){
            cout<<k;
        }
        for(int l = 2;l<=i;l++){
            cout<<l;
        }
        m--;
        cout<<endl;
    }
    return 0;
}
