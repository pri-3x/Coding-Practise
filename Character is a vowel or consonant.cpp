#include <iostream>

using namespace std;

int main()
{
   char c;
   cin>>c;
   if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
       cout<<"It is vowel";
   }
   else{
       cout<<"It is consonant";
   }
   
   return 0;
}
