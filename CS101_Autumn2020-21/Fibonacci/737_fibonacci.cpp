# include<simplecpp>

main_program
{
  long unsigned int f1, f2, n, k, term;
  f1=0;
  f2=1;

  cin>>n>>k;
  cout<<f1%k;
  cout<<endl;
  cout<<f2%k;
  cout<<endl;

  if(n>=1 && n<=pow(10,5) && k>=1 && k<=pow(10,5))
  {
   for(long unsigned int i=3; i<=n ; i++)
   {
    term = f1+f2;
    f1=f2;
    f2=term;
    cout<<term%k<<"\n";

   }
  }
}
