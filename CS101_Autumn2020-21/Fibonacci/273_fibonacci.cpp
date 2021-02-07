#include<simplecpp>
main_program{

            int x=0,y=1,
            sum,lim,mod;
           cin>>lim>>mod;
           cout<<"0"<<endl;

           cout<<"1"<<endl;

for(int i=1;i<=lim-2;i++)
{
           sum=x+y;

           cout<<sum%mod<<endl;

           x=y%mod;
           y=sum%mod;
}





}
