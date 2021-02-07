#include<simplecpp>

main_program{
int i,a=0,b=1,s,n,k;
cin >> n >> k;
cout << a << endl;
cout<< b<< endl;
s=a+b;
for(i=1; i<=n-2; ++i)
{  cout << s << endl;
   a=b;
   b=s;
   s=(a+b)%k;
}
wait(0.2);



}
