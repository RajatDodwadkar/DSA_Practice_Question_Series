/* understanding vectors.
Intialization : vector<datatype> name(size,elements);
                vector<int> v1(5,10);
                vector<int> v1
Inserting values : vectorname.push_back(element);
                    v1.push_back(20); inserts 20 at the end
Deleting values : vectorname.pop_back();
                    v1.pop_back();deletes last index element
methods : v1.size();returns length of the vector
          v1.begin();returns first element of the vector
          v1.end();returns the last element of the vector
          swap(v1,v2);swaps the elements of two vectors.
looping through the vector : 
    for(int i=v.begin();i!=v.end();i++){
        cout<<v[i]<<endl;
    }

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
    cout<<*it<<endl;
    }

    for(auto i:v){
        cout<<i<<endl;
    }
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
    }

    for(auto e:v){
        cout<<e<<" ";
    }

    v.pop_back();

    vector<int> v2(3,50);
    for(auto j:v2){
        cout<<j<<" ";
    }
    swap(v,v2);
    for(auto j:v){
        cout<<j;
    }
}