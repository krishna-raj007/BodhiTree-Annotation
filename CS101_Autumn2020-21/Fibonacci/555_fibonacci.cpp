#include<simplecpp>

main_program{
 long int n,k,c,d,e,f;
cin >> n >> k;
c=-1;
d=1;
for(e=1;e<=n;e++)
{
  f=c+d;
  cout << (f%k) << endl;
  c=d;
  d=f;}



}
