#include<simplecpp>
#include<math.h>
main_program
{
    double answer;
    int n;
    cin>>n;
    double s=0;
    double i=0,t;
    repeat(n+1)
    {
       t=(pow(-1,i))/(2*i+1);
       s=s+t;
       i=i+1;
    }
    answer=4*s;
    cout<<answer;
}
