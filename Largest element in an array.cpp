#include<iostream>

using namespace std;

int main(){
    int n;
    int a[15];
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    /*for(i=0;i<n;i++){
        cout<<a[i]<< " ";
    }*/
    int largest=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>a[0])
        a[i]=largest;
    }
    cout<<"Largest element is "<<largest;
}
