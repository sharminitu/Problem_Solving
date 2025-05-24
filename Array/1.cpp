#include<iostream>
using namespace std;
int main(){
    int a[5];
    int max=0;
    int min,sum=0,c1=0,c2=0;
    for(int i=0;i<=5;i++){
        cin>>a[i];
    }
    for(int i=0;i<=5;i++){

        sum +=i;
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
        if(a[i]%2==0){
            c1++;
        }
        else{
            c2++;
        }
        
        
    }
    cout << max << endl;
    cout<<min<<endl;
    cout<<sum<<endl;
    cout<<c1<<endl;
    cout<<c2<<endl;
}