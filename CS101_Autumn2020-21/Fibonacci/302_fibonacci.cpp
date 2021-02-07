// Ayush Raisoni : fibonacci

#include<simplecpp>
main_program
{
    int n;
    cin>>n;

    long int k;
    cin>>k;
    long int a1,a2,a3;
    a1=0;
    a2=1;
    cout<<a1<<endl;
    cout<<a2%k<<endl;
    for(int i=1; i<=n-2; i++)
    {
        a3=a1+a2;
        a1=a2%k;
        a2=a3%k;

        cout<<a3%k<<endl;
    }
}
