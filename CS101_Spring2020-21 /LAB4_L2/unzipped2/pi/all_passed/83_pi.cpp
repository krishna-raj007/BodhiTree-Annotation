#include<simplecpp>
main_program
{
  long long int n,i;
  float t;
   cin>>n;


        for(i=0;i<=n;++i)
        {
           t+=pow(-1,i)/(2*i+1);
            }
        cout<<4*t;

        }

