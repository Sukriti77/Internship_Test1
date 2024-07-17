#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,5> a={23,56,34,23,12};
cout<<"Displaying the array elements:"<<endl;
for(int i:a){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}
