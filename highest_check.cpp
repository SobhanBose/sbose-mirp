#include<iostream>
using namespace std;
int main()
{
   int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t;
   cout <<"Enter integer 1: ";
   cin >>a;
   cout <<"Enter integer 2: ";
   cin >>b;
   cout <<"Enter integer 3: ";
   cin >>c;
   cout <<"Enter integer 4: ";
   cin >>d; 
   e=(a>b)&&(a>c)&&(a>d);
   f=(b>a)&&(b>c)&&(b>d);
   g=(c>a)&&(c>b)&&(c>d);
   h=(d>a)&&(d>b)&&(d>c);     
   if(e==1)
   {
   i=(b>c)&&(b>d);
   j=(c>b)&&(c>d);
   k=(d>b)&&(d>c);
   cout <<a <<" has the highest value.";
   }
   else
   if(f==1)
   {
   l=(a>c)&&(a>d);
   m=(c>a)&&(c>d);
   n=(d>a)&&(d>c);
   cout <<b <<" has the highest value.";
   }
   else
   if(g==1)
   {
   p=(a>b)&&(a>d);
   o=(b>a)&&(b>d);
   q=(d>b)&&(d>a);
   cout <<c <<" has the highest value.";
   }
   else
   if(h==1)
   {
   t=(a>b)&&(a>c);
   r=(b>c)&&(b>a);
   s=(c>b)&&(c>a);
   cout <<d <<" has the highest value.";
   }
   if(i==1)
   cout <<b<<" has the second highest value";
   else
   if(j==1)
   cout <<c<<" has the second highest value"; 
   else
   if(k==1)
   cout <<d<<" has the second highest value";
   else
   if(l==1)
   cout <<a<<" has the second highest value";
   else
   if(m==1)
   cout <<c<<" has the second highest value";
   else
   if(n==1)
   cout <<d<<" has the second highest value";
   else
   if(o==1)
   cout <<b<<" has the second highest value";
   else
   if(p==1)
   cout <<a<<" has the second highest value";
   else
   if(q==1)
   cout <<d<<" has the second highest value";
   else
   if(r==1)
   cout <<b<<" has the second highest value";
   else
   if(s==1)
   cout <<c<<" has the second highest value";
   else
   if(t==1)
   cout <<a<<" has the second highest value";
   return 0;
}
