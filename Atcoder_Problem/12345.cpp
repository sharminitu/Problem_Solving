#include<iostream>
using namespace std;
int main(){
    int a[5],c=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    int n =sizeof(a)/sizeof(a[0]);
    for(int j=0;j<n-1;j++){
    for(int i=j+1;i<n;i++){
        if(a[j]>a[i]){
            int temp= a[j];
            a[j]=a[i];
            a[i]=temp;
            c++;
        }
    }
    }
        if(c==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    
    return 0;
}