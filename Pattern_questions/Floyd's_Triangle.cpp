/*
Print the following pattern
n=5
1
23
456
78910
1112131415

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count =1;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}
