#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x;
    cin>>n>>k>>x;
    int A[n];

    for(int i=0;i<n;i++){
        cin>>A[i];
       
    }

    for(int i=n;i>=k;i--){
        A[i]=A[i-1];
    }
        A[k]=x;
    
    for(int i=0;i<=n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;


}