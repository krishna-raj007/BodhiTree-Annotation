#include<simplecpp>

main_program
{

long int n, k;
long int a1=0, a2=1, p;
cin>>n>>k;
if (n==1)
cout<<a1;
else
{
    cout<<a1<<endl<<a2<<endl;
    repeat(n-2)
    {
        p=a2;
        a2+=a1;
        a1=p%k;
        a2=a2%k;
        cout<<a2<<endl;
    }
}

}
