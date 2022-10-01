#include<iostream>
using namespace std;

int main()
{
   int num1;
   int num2;
   cin>>num1>>num2;
   if(num1>num2){
       cout<<num1 <<" is greater";
      
   }
   else if(num2>num1){
       cout<<num2<<" is greater";
   }
   else{
       cout<<"Both numbers are equal";
   }
   
}
