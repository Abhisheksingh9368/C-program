

#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"Enter the how many rows you want:";
    cin>>n;
    for(int i=n;i>=1;--i){
        for(int j=1;j<=i;++j){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;

 }