/*
Print Rectangle pattern of given length and breadth
 ****
 ****
 ****
 **** */

#include<iostream>
using namespace std;
int main(){
    int l, b;
    cin>>l>>b;
    for(int i =0; i<l;i++){
        for(int j =0; j<b;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
