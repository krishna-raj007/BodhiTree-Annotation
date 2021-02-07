#include<simplecpp>
main_program{
  long int n, k1=0,k2=1,z,nextTerm=0;
  cin>>n>>z;
  for(int i=1; i<=n; i++)
  {
    if(i==1)
    {
      cout<<k1<<endl;
      continue;
    }
    if(i==2){
      cout<<k2<<endl;
      continue;
    }
    nextTerm=(k1+k2)%z;
    k1=k2%z;
    k2=nextTerm%z;
    cout<<nextTerm<<endl;
  }
}
