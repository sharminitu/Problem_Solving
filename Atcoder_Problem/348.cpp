#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        if(i%3==0){
            cout << "x";
        }
        else{
            cout << "o";
            
        }
    }
    cout<<endl;

    return 0;
}