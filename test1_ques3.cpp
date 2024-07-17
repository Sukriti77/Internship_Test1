#include<iostream>
using namespace std;
int divisible_by_three(int a[],int n){
    int count=0;
for(int i=0;i<n;i++){
    if(a[i]%3==0){
        count++;
    }
}
return count;

}
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"Invalid Input"<<endl;
        return 0;
    }
    else{
    int arr[n];
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        if(e<0){
            cout<<"Invalid Input"<<endl;
            return 0;
        }
        else{
        arr[i]=e;
        }
    }
    int res=divisible_by_three(arr,n);
    cout<<endl;
    cout<<res<<endl;
return 0;
}
}
