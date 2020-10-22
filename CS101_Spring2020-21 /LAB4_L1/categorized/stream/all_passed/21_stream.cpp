#include<simplecpp>

main_program
{
    int m=0,n;
    while(true)
    {
        cin>>n;
        if(n>m)m=n;
        else if(n<0)break;
    }
    cout<<m;
}
