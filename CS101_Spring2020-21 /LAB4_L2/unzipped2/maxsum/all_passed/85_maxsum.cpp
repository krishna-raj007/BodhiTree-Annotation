#include<simplecpp>

main_program
{

    int sum,n1,n2,n3,n,maxsum=0;

    cin>>n3;
    cin>>n1;
    cin>>n2;
    sum=n1+n2;
    if(n3>2)
    {
        sum=sum-n1;

        repeat(n3-2)
        {
            cin>>n;
            sum=sum+n;
            maxsum=max(maxsum,sum);
            sum=n;
        }
        cout<<maxsum;
    }
    if(n<=2)cout<<sum;
}

