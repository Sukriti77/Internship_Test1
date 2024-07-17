#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l={2,34,1,48,22,11};
    int max=0;
    cout<<"Displaying the list: "<<endl;
    for(int v:l){
        cout<<v<<" ";
    }
    cout<<endl;
    for(int i:l){
        if(i>max){
            max=i;
        }
    }
    cout<<"Max of the list: "<<max<<endl;

return 0;
}
