//Say hello in different languages
#include<iostream>
using namespace std;
int main(){
    char button;
    cin>>button;
    switch(button){
    case 'a':
        cout<<"hello"<<endl;
        break;
    case 'b':
        cout<<"namaste"<<endl;
        break;
    case 'c':
        cout<<"cia"<<endl;
        break;
    case 'd':
        cout<<"salut"<<endl;
        break;
    default:
        cout<<"I am still learning more!"<<endl;
        break;
    }
}
