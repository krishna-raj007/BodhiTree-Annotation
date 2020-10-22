#include<simplecpp>

main_program
{
 double n,q;
 int a[100] ,b=0;
 while(true)
 {
  cin >> n;
  if(n==-1)
  break;
  a[b]=n;
  b++;
 }
 int i;
 q = a[0];
 for(i=0;i<=b-1;i++)
 {
  if(a[i]>q)
  q=a[i];
 }
 cout << q;
}
