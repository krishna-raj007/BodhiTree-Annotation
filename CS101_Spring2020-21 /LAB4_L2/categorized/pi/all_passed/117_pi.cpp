#include<simplecpp>
main_program
{
    int n,i;
    cin>>n;
    double ans,temp;
    ans=1;
    temp=1;
    i=n;
int j=1;
    repeat(i)
    {

        temp=(-1)*temp;
        ans=ans+(temp)*(1.0/(2*j+1));
        j++;

    }
    cout<<4*ans<<endl;
}
