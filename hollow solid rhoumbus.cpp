#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the how many row you want =";
  cin>>n;

  for(int i=1;i<=n;i++){
    for(intj=1;j<=n;j++){
        cout<<" ";
    }
    for(int j=1;j<=n;j++){
        if(i == 1 || i == n ){
            cout<<"*";
        }
        else{
            if(j == 1 || j == n ){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
    }
    cout<<"\n";
  }
  return 0;

}
