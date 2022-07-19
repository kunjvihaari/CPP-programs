#include<iostream>
using namespace std;

bool sort(int i,int arr[4]){
    if(i==3) return true;

    if(arr[i]>arr[i+1]) return false;

    sort(i+1,arr);
}
int main(){
    // int N;
    // cin>>N;
   int arr[4]={1,2,4,4};
    bool p=sort(0,arr);
    cout<<p<<endl;
    return 0;
}

