//pre and post increment, pre and post decrement
#include<iostream>
using namespace std;
int main(){
    int i, j, k, l, m;
    i =10;
    j=20;
    k= 0;
    //    1   2    1     2      3    4
    k = i + j + i++ + j++ + ++i + ++j;
    //    1     2     3
    l = i-- - j-- - k--;
    //   10     9     19    20    9     20   10    19
    m = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    // i = 10 , j = 20
    cout<<"i : "<<i<<endl;
    cout<<"j : "<<j<<endl;
    cout<<"k : "<<k<<endl;
    cout<<"l : "<<l<<endl;
    cout<<"m : "<<m<<endl;
    return 0;
}
