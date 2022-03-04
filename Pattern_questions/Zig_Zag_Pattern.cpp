 /*
Print the following pattern.
 n=3
    *   *
   * * * *
  *   *   *

*/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cin>>n;
    for(int i= 1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(((i+j)%4==0)||(j%4==0&&i==2)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            }
        cout<<endl;
    }
    return 0;
}
