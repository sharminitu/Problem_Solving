#include<iostream>
using namespace std;
int main(){
    int a[5],i;
    int n = sizeof(a)/sizeof(a[0]);
    for(int i = 0 ;i<n;i++){
        cin>>a[i];
    }
    int last = a[n-1];
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0] = last;

    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }

}
