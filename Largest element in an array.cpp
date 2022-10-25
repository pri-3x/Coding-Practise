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
    int largest;
    for(int i=0;i<n;i++){
        largest=a[0];
        if(a[i]>a[0])
        a[i]=largest;
    }
    cout<<"Largest element is "<<largest;
}
