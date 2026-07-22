#include<iostream>
#include<unordered_set>
using namespace std;
int duplicate(int arr[],int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(s.count(arr[i])){
            return arr[i];
        }
        s.insert(arr[i]);
    }
    return -1;
}
int main(){
    int arr[]={1,3,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<duplicate(arr,n)<<endl;
    return 0;
}