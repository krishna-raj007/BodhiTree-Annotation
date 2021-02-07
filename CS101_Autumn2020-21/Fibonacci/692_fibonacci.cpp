#include<simplecpp>

main_program{
  long long int n,k;
  cin>>n>>k;

  long long int F1=0 , F2=1 ,F3;
  for (int i=1;i<n;i++)
  {
    if(i==1)
    {
      cout<<F1<<endl<<F2<<endl;
    }
    else
    {
      F3 = F1 + F2;
      F1 = F2;
      F2 = F3;
      cout<<F3%10<<endl;
    }
  }
}
