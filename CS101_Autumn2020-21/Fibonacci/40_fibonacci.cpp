#include<simplecpp>
main_program{

  long long int k, n;
  int series[]={0,1},x;
  cin>>n;
  cin>>k;
  for(int i=0;i<n;++i)
  {
    cout<<(series[0])%k<<endl;
    x=series[0]+series[1];
    series[0]=series[1];
    series[1]=x;
  }
  return 0;
}
