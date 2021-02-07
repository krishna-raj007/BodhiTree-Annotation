#include<simplecpp>

main_program{
//Write your code here
long long unsigned int i,n,k,t1=0,t2=1,t3;
cin>>n;
cin>>k;
cout<<t1%k<<" "<<endl;
cout<<t2%k<<" "<<endl;
for(i=1; i<=n-2; i++)
  {
   t3=(t1+t2)%k;
   cout<<t3<<endl;
   t1=t2;
   t2=t3;
  }
}

