#include<iostream>
using namespace std;

int main(){
int n;
 cout<<"Enter the how many row you want =";
 cin>>n;

 int space = (2*n-1)/2;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=space;j++){
        cout<<" ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
    space--;
 }
 space=0;
 for(int i=n;i>=1;i--){
    for(int j=1;j<=2*1-1;j++){
        cout<<" ";
    }
    for(intj=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
    space++;
 }
 return 0;
}
