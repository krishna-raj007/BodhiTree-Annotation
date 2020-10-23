#include<simplecpp>
#include<math.h>
main_program
{
    int n;
    cin>>n;
    if(n>=0)
    {
        double a=0;
        for(int i=0;i<=n;i++)
        {
            a+=(pow(-1,i)/((2*i)+1));
        }
        cout<<4*a;
    }
}
