#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    char str[10];
    char str1[10];
    cin>>str;
    cin>>str1;
    int res=strcmp(str,str1);
    if(res==0){
        cout<<"Strings are equal";
        
    }
    else{
        cout<<"they are not equal";
    }

    return 0;
}
