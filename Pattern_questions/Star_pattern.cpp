 /*
Print the following pattern.
 n=3
    *
   ***
  *****
  *****
   ***
    *
*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    int m =n;
    for(int i= 0;i<=n;i++){
        for(int j=m;j>=1;j--){
                cout<<" ";
        }
        for(int k=1;k<=1+2*i-2;k++){
                    cout<<"*";
                }
        m--;
        cout<<endl;
    }
    m =0;
    for(int i= n;i>=0;i--){
        for(int j=1;j<=m;j++){
                cout<<" ";
        }
        for(int k=1;k<=1+2*i-2;k++){
                    cout<<"*";
                }
        m++;
        cout<<endl;
    }
    return 0;
}
