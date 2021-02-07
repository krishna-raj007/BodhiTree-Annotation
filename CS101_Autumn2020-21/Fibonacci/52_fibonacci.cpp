#include<simplecpp>

main_program{
long long int n,a= 0,b= 1, c = 0,k;
cin >>n>>k;
for (long long int i=1; i<=n;++i)
    {
        if(i==1)
        {
            cout <<a%k<<endl;
            continue;
        }
        if(i==2)
        {
            cout <<b%k<<endl;
            continue;
        }
        c=(a%k)+(b%k);
        a=b%k;
        b=c%k;
        cout <<c%k<<endl;
    }
}
