#include<simplecpp>

main_program{

    int n,a,b,sum,maxsum=0;
    cin>>n;
    cin>>a;
    repeat(n-1)
    {
        cin>>b;
        sum=a+b;
        maxsum=max(sum,maxsum);
        a=b;
    }

    cout<<maxsum;
}
