#include<iostream>
using namespace std;
int main(){
    int a[5],i;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        for(int j=n+i;j<n;j++){
            if(a[i]>a[j]){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
            
        }
    }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        
    }
   