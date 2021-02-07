#include<simplecpp>
main_program{
  long long int s=0,a=0,b=1,n,k;
  cin>>n>>k;
  for(int i=0;i<n;i++){
    if(i==0)s=0;
    if(i==1)s=1;
    if(i>1)s=(a%k+b%k);
    if(i>1)a=b%k;
    if(i>1)b=s%k;
    cout<<s%k<<endl;
    if(i==n)break;
    }
  }
