// #include<iostream>
// using namespace std;
// int main(){
//     int a[5],i,j;
//     for(int i=0;i<5;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(a[i]>a[j]){
//                 int temp =a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//                 // if (a[i] < a[j])
//                 // {
//                 //     cout << "Yes" << endl;
//                 // }
//                 // else
//                 // {
//                 //     cout << "No" << endl;
//             }      
//         }
//         cout << a[i] <<" ";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;

    if(a<b&&b<c&&c<d&&d<e){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}