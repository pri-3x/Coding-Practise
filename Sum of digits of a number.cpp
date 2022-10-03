#include<iostream>
using namespace std;

int main(){
    int num;
    int sum=0;
    cin>>num;
    while(num!=0){
        sum=sum+num%10; //1234%10=4//
        num=num/10; //1234/10=123
        
    }
    cout<<sum;
}
