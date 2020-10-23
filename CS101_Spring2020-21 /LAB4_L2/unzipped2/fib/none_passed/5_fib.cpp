#include<simplecpp>
main_program
{
    double n,i,j,k;
    cin>>n;
    j=0;
    if(n!=0)
    {
        for(k=0; k<=n; k++)
            j=j+((pow(-1,k))*(1/((2*k)+1)));
        i=4*j;
        cout<<i;
    }
    i=4;
    cout<<i;
}
