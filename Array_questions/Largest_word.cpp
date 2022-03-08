/*Find the length of largest word and output the largest word in a sentence
Input : 100
        I love programming
Output: 11
        programming

*/

#include<iostream>
using namespace std;
int main(){
    int n,i=0,clen=0,mlen=0,st=0,maxst=0;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    while(1){
        if(arr[i]==' '||arr[i]=='\0'){
            if(mlen<clen){
                mlen=clen;
                maxst=st;
            }
            st=i+1;
            clen=0;
        }
        else{
            clen++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<mlen<<endl;
    for(int i =0;i<mlen;i++){
        cout<<arr[i+maxst];
    }
} 