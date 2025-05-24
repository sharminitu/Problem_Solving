// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;

//     if(a*c==b||a*b==c||b*c==a){
//         cout<<"Yes"<<"\n";
//     }
//     else{
//         cout<<"No"<<"\n";
//     }

//     return 0;
// }

#include <iostream>
#include<vector>
#include<set>
using namespace std;
void removeNUM(int a,int b,vector<int>&t){
    set<int> all_numbers;

    for(int i=1;i<=a;i++){
        all_numbers.insert(i);
    }
    for(int num:t){
        all_numbers.erase(num);
    }
    cout<<all_numbers.size()<<"\n";

    for(int num :all_numbers){
        cout<<num<<" ";
    }
    cout<<endl;
}
int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>t(b);

    for(int i=0;i<b;++i){
        cin>>t[i];
    }

    removeNUM(a,b,t);
    
    return 0;
}