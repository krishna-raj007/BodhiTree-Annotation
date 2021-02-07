#include<simplecpp>

main_program{
long int n,k,F0=0,F1=1,f;
cin>>n;cin>>k;
cout<<F0%k<<endl;
cout<<F1%k;
for(int i=2;i<n;i++)
{f=F0+F1;
F0=F1%k;
F1=f%k;
cout<<endl<<f%k;

}


}
