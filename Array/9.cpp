#include<iostream>
using namespace std;
int main(){
    int c=0;
    char s[1000] = "Sorry, Server is unavailable now.’‘Please try again.’‘ERROR 404, come later.’";

    for(int i =0; s[i]!='\0';i++){
        c++;
    }
    cout << c << endl;
    
    return 0;
}