#include<simplecpp>

main_program{
//Write your code here
long int f0=0, f1=1, fn=f0+f1, mod1, mod2, modn;

int n;
long int k;

cin >> n >> k ;
mod1=f0%k;
mod2=f1%k;
modn= fn%k;
  cout<< f0<<"\n"<<f1<< "\n";
  repeat(n-2)
    {
     cout << modn <<'\n';
     mod1=mod2; // f0 and f1 can be takes as fn-1 and fn-2
     mod2=modn;
     modn=(mod1+mod2)%k;

       }


}
