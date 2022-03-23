// Print if a letter is vowel or consonant
// Input : a    Outut : vowel
// Input : d    Outut : consonant

#include<iostream>
using namespace std;

int main()
{
    char letter;
    cin>>letter;
    letter = tolower(letter);
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'){
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"Consonant"<<endl;
    }
    return 0;
} 
