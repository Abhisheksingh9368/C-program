#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int no){
  for(int i=0;i<n;i++){
    if(arr[i]==no){
        return i;
    }
  }
return -1;
}

int main(){
 int n;
  cout<<"Enter the size of array=";
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>array[i];

  }
  int no;
  cout<<"Enter the no you found=";
  cin>>no;

  cout<<linearsearch(arr,n,no)<<endl;
  return 0;


}
