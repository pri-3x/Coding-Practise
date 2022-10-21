#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    swap(arr[s],arr[e]);
    s++;
    e--;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}
