#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cin>>a>>op>>b;

    switch(op)
    {
    case '+':
        cout<<"sum = " << a+b<<endl;
        break;
    case '-':
        cout<<"difference = " << a-b<<endl;
        break;
    case '*':
        cout<<"product = " << a*b<<endl;
        break;
    case '/':
        cout<<"qoutient = " << a/b<<endl;
        break;
    case '%':
        cout<<"remainder = " << a%b<<endl;
        break;
    default:
        cout<<"Invalid Operator"<<endl;
        break;
    }
    return 0;
}
