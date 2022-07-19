#include<iostream>
using namespace std;

bool ls(int i,int arr[4],int k){
    if(i==4) return 0;

   return (arr[i]==k || ls(i+1,arr,k));
}
int main(){
    // int N;
    // cin>>N;
   int arr[4]={1,2,8,4};
   int k=4;
    bool p=ls(0,arr,k);
    cout<<p<<endl;
    return 0;
}

