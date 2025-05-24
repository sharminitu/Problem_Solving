#include<iostream>
using namespace std;
int main(){
    int a[5];
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int first = a[0];
    for(int i = 0;i<n-1;i++){
        a[i]=a[i+1];
        
    }
    a[n-1] = first;

    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
}