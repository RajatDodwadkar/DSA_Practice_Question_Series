// Understanding pairs
// used to store two values together.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int,char> p;
    p.first= 3;
    p.second='h';
    // p =make_pair(3,'h');
    cout<<p.first<<endl;
    cout<<p.second;   
    
}