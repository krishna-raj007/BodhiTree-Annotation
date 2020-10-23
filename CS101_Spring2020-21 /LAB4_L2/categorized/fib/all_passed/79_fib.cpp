#include<simplecpp>
main_program
{
    long long int n,i;
    cin>>n;
    if(n==0)
        cout<<"0";
    else
   {

    int a=1,b=1,sum=1,number=1;
    for(i=1;sum<=n;++i)
    {
        sum=(a+b);
        a=b;
        b=sum;
        number++;
    }
    if(a==n)
        cout<<number;

    else
        cout<<"-1";
   }

    }
