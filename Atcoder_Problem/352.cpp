#include<iostream>
using namespace std;
int main(){
    int n,x,y,z,c=0;
    cin>>n>>x>>y>>z;

    if(x>y){
        int temp = x;
        x=y;
        y=temp;
    }

    for(int i=x;i<=y;i++){
        if(i==z){
            c++;
        }
        
    }
    if (c==1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}