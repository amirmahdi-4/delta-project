#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
 system("color b");
 int a,b,c;
 float delta,x1,x2;
  cout<<"enter a: ";
  cin>> a;
  cout<<"enter b: ";
  cin>> b;
  cout<<"enter c: ";
  cin>> c;
  delta=(b*b)-(4*a*c);
  cout<<"delta= "<<delta<<"\n";
 if(delta>0)
 {
  x1=(-b+pow(delta,0.5))/(2*a);
  x2=(-b-pow(delta,0.5))/(2*a);
  cout<<"x1= "<<x1<<"\n";
  cout<<"x2= "<<x2<<"\n";
 }
 else if(delta==0)
{
  x1=-b/2*a;
  cout<<"x1= "<<x1<<"\n";
}
 else
  cout<<"rishe nadarad";

    return 0;
}
