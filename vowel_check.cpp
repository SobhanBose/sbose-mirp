#include<iostream>
using namespace std;
int main()
{
   char a;
   int c;
   cout<<"Enter an alphabet: ";
   cin>>a;
   cout<<endl;
   c = (a=='a')||(a=='e')||(a=='i')||(a=='o')||(a=='u')||(a=='A')||(a=='E')||(a=='I')||(a=='O')||(a=='U');
   if(c==1)
   {
   cout<<"The alphabet " <<a <<" is a vowel" <<endl;
   }
   else
   {
   cout<<"The alphabet " <<a <<" is a consonent" <<endl;
   }
   return 0;
}
   
