#include<simplecpp>

main_program
{
 int n,k,f0=0,f1=1,f,a;
 //cout<< "Enter value n";
 cin>> n;
 //cout<< "Enter value k";
 cin>> k;
 cout<< f0 << "\n"<< f1<< "\n";
 repeat(n-2)
 {
  f= (f0%k) + (f1%k);
  a= f%k;
  cout<< a<< "\n";
  f0=f1;
  f1=f;
 }

}
