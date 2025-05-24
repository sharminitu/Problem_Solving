#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];

    for(int i=0;i<4;i++){
        cin>>a[i];
    }

    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int c=0;

    for(int i=0;i<3;i++){
        if(a[i]==a[i+1]){
            c++;
            i++;
        }
    }
    cout<<c<<endl;

    return 0;
}