//Naive solution
#include<iostream>
#include<cmath>
#include <limits.h>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n,k,q,r;
    vector<int> binary;
    cin>>n>>k;
    if(n==0){cout<<"No";return 0;}
    while(n>0){
        q=n/2;
        r=n%2;
        n=q;
        binary.push_back(r);
    }
    if(binary[binary.size()-k]==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
// time complexity:O(logn)
// space complexity:O()