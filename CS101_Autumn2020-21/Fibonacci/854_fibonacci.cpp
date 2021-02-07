
 #include<simplecpp>
main_program{
  long long n,k,x1=0,x2=1,x=0;
  cin>>n>>k;
  cout<<x1<<endl<<x2<<endl;
  for(long long i=1;i<=n-2;i++)
  x=x1+x2;
  x1=x2;
  x2=x%k;
  cout<<x2<<endl;}
