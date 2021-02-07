#include<simplecpp>
main_program
{
     long long int n,k,a1=0,a2=1,an,f;
    cin>>n>>k;
    long long int i=3;
   cout<<a1%k<<endl<<a2%k<<endl;
    while(i<=n)
    {
    an=a1+a2;
    //f=((a1%k)+(a2%k))%k;
    cout<<((a1%k)+(a2%k))%k<<endl;
    a1=a2;
    a2=an;
    i++;
    }
}
