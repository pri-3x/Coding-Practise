#include<iostream>

using namspace std;

int main(){
  
  int n;
  cin>>n;
  int rev=0;
  int rem;
  int temp;
  temp=num;
  while(temp>0){
    rem=temp%10;
    rev=rev*10+rem;
    temp=temp/10;
  }
  if(rev==num){
  cout<<"It is a palindrome"<<endl;
  }
  else{
    cout<<"It is not a palindrome"<<endl
  }
  return 0;
  
  
  
}
