#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a<100){
        cout<<100-a;
    }
    else if(a>=100&&a<200){
        cout<<200-a;
    }
    else if(a>=200&&a<300){
        cout<<300-a;
    }
    else if(a>=300&&a<400){
        cout<<400-a;
    }
   
    return 0;
}