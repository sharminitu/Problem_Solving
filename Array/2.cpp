#include<iostream>
using namespace std;
int main(){
    int a[5],temp,i,j;
    for(int i=0;i<5;++i){
        cin>>a[i];
    }
    for(int i=0;i<5;++i){
        for(int j=i+1;j<5;++j){
            if(a[i]>a[j]){
               int temp = a[i];
               a[i]=a[j];
               a[j] = temp;
            }  
            
        }

    }
    for(int i =0;i<5;++i){

    cout << a[i] << " ";
    }

    if (a[i] < a[j])
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}