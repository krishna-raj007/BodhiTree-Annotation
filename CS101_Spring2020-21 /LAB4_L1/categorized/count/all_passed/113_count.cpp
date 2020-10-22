#include<simplecpp>

main_program{
int N,A[100],temp = 0;
cin>>N;

for( int i = 0;i<N;i++)
{
  cin>>A[i];
}
for( int j = 0; j<N;j++)
{
  if ( A[j]%2==0)
  {
    temp++;
  }
   if( A[j]%3==0)
  {
    temp++;
  }
   if( A[j]%5==0)
  {
    temp++;
  }
   if( A[j]%7==0)
  {
    temp++;
  }
   if( A[j]%11==0)
  {
    temp++;
  }
  cout<<temp<<endl;
  temp = 0;
}
}
