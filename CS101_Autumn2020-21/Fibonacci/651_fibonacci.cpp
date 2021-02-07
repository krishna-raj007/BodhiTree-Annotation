#include<simplecpp>

main_program{
//Write your code here
long long unsigned int f1=0,f2=1,n,k,i=1,t;
cin>>n>>k;
cout<<"\n"<<f1<<endl<<f2;
  for(;i<=n-2;++i)
   { t=(f1%k+f2%k)%k;
     f1=f2%k;
     f2=t;
     cout<<"\n"<<t;
   }


}
