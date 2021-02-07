#include <simplecpp>
main_program{

  int long long first=0, second=1,  k,  answer=0, sum=0;
  int n;
  cin>>n>>k;
    for( int i=0; i<n; i++)
{
    if (i<=1)
{
     sum=i;
     answer=sum%k;
     cout<<answer<<endl;

}
     else
     {
         sum= (first+second) % k;
         first=second;
         second=sum;
         cout<<sum<<endl;
         }
         }
         }


