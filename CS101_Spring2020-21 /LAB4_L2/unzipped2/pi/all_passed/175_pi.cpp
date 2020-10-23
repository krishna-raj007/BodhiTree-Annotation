#include<simplecpp>

main_program
{
    double a=0,n;
    cin>>n;
    double i=n;
    repeat(n+1)
    {
        a=a+4*((pow(-1,i))*1/(2*i+1));
        i--;
    }
    cout<<a;

    //Write your code here

}
