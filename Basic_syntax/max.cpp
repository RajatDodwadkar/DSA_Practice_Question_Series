//Find the largest of three numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a<b)
    {
        if(c<b)
        {
            cout<<b;
        }
    }
    if(a>b)
    {
        if (a>c)
        {
            cout<<a;
        }
    }
    else
    {
    cout<<c;
    }
    return 0;
}
