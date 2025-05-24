#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max =0;

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    max=a[1];
    for(int i=1;i<=n;i++){
        if(a[i]>max){  
            cout << i << endl;
            return 0;
        }
    }
    cout<<"-1"<<endl;
    return 0;
}
