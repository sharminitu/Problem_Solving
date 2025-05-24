#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int h,b=0;
    cin>>h;
    for(int i=1;i<=h;i++){
         b += pow(2,i);
        if(b>=h){
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}