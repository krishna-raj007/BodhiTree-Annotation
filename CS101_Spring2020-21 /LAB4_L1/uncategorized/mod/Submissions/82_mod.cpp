#include<simplecpp>

main_program
{
    long int n,m;
    cin>>n>>m;
    long int i=1,fac=1;
    if((n<=100000)&&(m<=1000000000));
    {
        repeat(n)
        {
            fac=fac*i;
            i=i+1;
            fac=fac%m;


        }
    }
    cout<<fac<<endl;

    //Write your code here

}
