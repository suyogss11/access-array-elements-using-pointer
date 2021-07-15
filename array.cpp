#include<iostream>
using namespace std;

int main(){

   int*p;

  int arr[5];
  cout<<"enter 5 numbers in array"<<endl;

  for(int i=0;i<5;i++){

   cin>>arr[i];

  }

  p = arr;


  cout<< "you entered :"<<endl;
  for(int i=0;i<5;i++){
  cout<<*p <<endl;

  p++;

  }

  return 0;


}
