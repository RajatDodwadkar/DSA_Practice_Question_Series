 /*
Print the following pattern.
 n=5
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m =n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
                cout<<" ";
        }
        for(int k=1;k<=i;k++){
                cout<<k<<" ";
        }
        m--;
        cout<<endl;
    }
    return 0;
}
