#include<simplecpp>

main_program{
long int n,k,f1=0,f2=1,fn;
cin>>n>>k;
fn=f1 + f2;
cout<<f1%k<<"\n"<<f2%k;
for(int i=0;i<n-2;++i)
        {
           fn=f1%k+f2%k;
            cout<<"\n"<<fn%k;
            f1=f2%k;
            f2=fn%k;


        }

}
