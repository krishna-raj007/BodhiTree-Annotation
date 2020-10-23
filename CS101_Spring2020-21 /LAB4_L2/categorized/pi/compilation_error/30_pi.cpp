#include<simplecpp>

main_program
{
    int n;
    double x,i;
    i=0;
    x=4;
    cin>>n;
    repeat(n)
    {
        i=i+1;
        x=x+4.0*(((-1)^(i))*1.0/(2.0*i+1.0));

    }
    cout<<x;
}
