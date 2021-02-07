#include<simplecpp>

main_program{
long int f1=0,f2=1,f3;
int n,k;
cin >> n >> k;

 cout << f1%k << "\n"<< f2%k << "\n";

repeat(n-2)
{
 f3 = (f2+f1)%k ;
 cout << f3<<"\n";
 f1 = f2;
 f2=f3;





}


}
