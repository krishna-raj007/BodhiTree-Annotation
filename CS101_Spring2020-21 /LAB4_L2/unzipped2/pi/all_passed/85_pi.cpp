#include<simplecpp>

main_program
{
    int n;
    cin>>n;
    double sum=1;
    int i=1;
    repeat(n)
    {
        sum=sum+(pow(-1,i))/(2*i+1);
        i++;
    }
    cout<<4*sum;

}
