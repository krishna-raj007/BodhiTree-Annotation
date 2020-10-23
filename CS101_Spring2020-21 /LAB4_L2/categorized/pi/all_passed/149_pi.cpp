#include<simplecpp>
main_program
{
    double n,a,k=0,i;
    cin>>n;
    if (n==0)
        cout<<"4";
    else
    {


        i=n;
        repeat(i)
        {
            k+=pow(-1,n)/(2*n+1);
            n--;



        }
        cout<<(k+1)*4;

    }
}
