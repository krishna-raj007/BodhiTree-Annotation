#include<simplecpp>
main_program
{
    float b,a=0;
    int n,i=0;
    cin>>n;
    repeat(n+1)
    {
        a=a+((pow(-1,i))*1/(2*i+1));
        i=i+1;
    }
    b=4*a;
    cout<<b<<endl;
}
