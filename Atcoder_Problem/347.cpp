#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int t[a];
    for(int i=0;i<a;i++){
        cin>>t[i];
    }
    for(int i=0;i<a;i++){
        if(t[i]%b==0){
            int c=t[i]/b;
            cout<<c<<" ";
        }
    }
    cout<<endl;

    return 0;
}