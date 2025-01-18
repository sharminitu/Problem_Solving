#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>0&&a<100){
    if(a>80){
        cout << "Well Done!" << endl;
    }
    else{
         cout << "Try Again!" << endl;
    }
    }

    return 0;
}