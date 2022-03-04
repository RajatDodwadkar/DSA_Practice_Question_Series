// Chech id the given number is armstrong number
// Input : 153
// 1^3 + 5^3 + 3^3 = 1+125+27 =153 
// Output : armstrong number

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num,last_digit;
    int res =0;
    cin>>num;
    int n = num;
    while(n>0){
        last_digit = n%10;
        res = res + pow(last_digit,3); 
        n = n/10;
    }
    if(res==num){
        cout<<"Armstrong number"<<endl;
    }
    else{
        cout<<"Not Armstrong number"<<endl;
    }
    return 0;   
}