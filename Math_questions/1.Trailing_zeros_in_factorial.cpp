//Naive Method
#include<iostream>
#include<cmath>
#include<vector>
#include<string>

using namespace std;

int count_trail_zero(int n){
    int res=1;
    for(int i =1;i<=n;i++){
        res=res*i;
    }
    int fact = res;
    int count=0;
    while(fact>0){
        if((fact%10)==0){
            count++;
        }
        fact=fact/10;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<count_trail_zero(n);
    return 0;
}
// time complexity:theta(n)
// space complexity:theta(1)