#include<simplecpp>

main_program{
unsigned int n,k,F0 = 0,F1 = 1;
unsigned int Fn,Fn_1,Fn_2;
cin>>n>>k;
cout<<F0%k<<endl<<F1%k<<endl;
for(unsigned int i = 3;i<=n;i+=1)
  {
  if(i==3)
    {
    Fn_1 = F1;
    Fn_2=F0;
    Fn = Fn_1+Fn_2;
    cout<<Fn%k<<endl;
    }
  else
    {
    Fn_2 = Fn_1%k;
    Fn_1 = Fn%k;
    Fn = Fn_1+Fn_2;
    cout<<Fn%k<<endl;
    }
  }
}
