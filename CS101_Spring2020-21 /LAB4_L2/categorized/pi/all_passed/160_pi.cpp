#include<simplecpp>
#include<math.h>
main_program
{

    int n;
    float i=0;
    cin>>n;
    float sum=0,pi;
    repeat(n+1)
    {
        sum=sum+(pow(-1,i))*(1.0/(2*i+1));
        i++;


    }

    pi=4*sum;
    cout<<pi;








}
