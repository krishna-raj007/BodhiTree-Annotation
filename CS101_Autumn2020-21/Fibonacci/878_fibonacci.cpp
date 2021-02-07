#include<simplecpp>
main_program{
   long long int n,k, x=0,y=1,z;
    cin>>n>>k;
    cout<<x%k<<endl;      if(n>1) cout<<y%k<<endl;
    for(int i=0;i<=n-3;i++)
    { z=(x+y);
     cout<<z%k<<endl;
     x=y%k;
     y=z%k;

        }









}
