#include<simplecpp>

main_program{

 long long   f0=0, f1=1,  k, term1=f0, term2=f1, f, n;
 cin>>n;
 cin>>k;
 cout<<f0%10<<endl;
 cout<<f1%10<<endl;
for(int i=1; i<=n-2; i++ )
{
 f= term1 + term2;
 cout<<term1%k + term2%k<<endl;
 term2=f;
 term1= term2 - term1;




}















}
