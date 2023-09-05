#include<iostream>
using namespace std;

    int binarysearch(int arr[],int n,int no){
    int s=0;
    int e=n;
    while(s<e){
    int mid=(s+e)/2;

    if(arr[mid]== no){
        return mid;
    }
    else if(arr[mid]>no){
        e=mid-1;
    }
    else{
        s=mid+1;
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
  cout<<binarysearch(arr,n,no)<<endl;
  return 0;


}
