
#include<simplecpp>


main_program
{
    int n;
    cin>>n;
    int i=1;
    double ans=1;
    repeat(n)
    {

        double j=1;
        double k=pow(-1.0,i)/(2*i+1);
        ans=j+k;
        j=ans;
        i++;



    }
    double outp=4.0*ans;
    cout<<outp;

}
