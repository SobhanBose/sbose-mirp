#include<iostream>
using namespace std;
int main()
{
  int a, b, c, d, e, f, g;
  cout<<"Enter cutoff marks for Grade A, Grade B and Grade C respectively: ";
  cin >>a >>b >>c;
  d=(b>a)||(c>b)||(c>a);
  if(d==1)
  {
    cout<<"The entered cutoffs are invalid!";
  }
  else
  {
    cout<<"Enter the marks in Mathematics: " <<endl;
    cin >>e;
    cout<<"Enter the marks in Science: " <<endl;
    cin >>f;
    cout<<"Enter the marks in English: " <<endl;
    cin >>g;
    if(e>=a)
    cout<<"Grade A in Mathematics."<<endl;
    if((e>=b)&&(e<a))
    cout<<"Grade B in Mathematics."<<endl;
    if(e<b)
    cout<<"Grade C in Mathematics."<<endl;
    if(f>=a)
    cout<<"Grade A in Science."<<endl;
    if((f>=b)&&(f<a))
    cout<<"Grade B in Science."<<endl;
    if(f<b)
    cout<<"Grade C in Science."<<endl;
    if(g>=a)
    cout<<"Grade A in English."<<endl;
    if((g>=b)&&(g<a))
    cout<<"Grade B in English."<<endl;
    if(g<b)
    cout<<"Grade C in English."<<endl;
    return 0;
    }
}
