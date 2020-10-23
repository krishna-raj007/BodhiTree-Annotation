#include<simplecpp>

main_program
{
    int n,a,b,sum,sum1,maxs;
    maxs=0;
    cin>>n;
    sum=0;
    b=0;
    cout<<max(10,100);
    repeat(n)
    {
        sum1=maxs;
        cin>>a;
        sum=b+a;
        sum1=sum;
        b=a;
        maxs=max(sum,sum1);
    }

        cout<<maxs;







}



