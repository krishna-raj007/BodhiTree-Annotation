#include<simplecpp>
main_program
{

    int n ,fib0=0,fib1=1,fib=0;
    cin>>n;
    int m=0;

    while(fib<n)
    {

        fib=fib0+fib1;
        fib0=fib1;
        fib1=fib;
        m++;




    }
    if(fib>n)
        {
            cout<<-1;
        }
    if(fib==1)
        {
            cout<<1;
        }
    else if(fib==n)
        {
            cout<<m+1;
        }








}
