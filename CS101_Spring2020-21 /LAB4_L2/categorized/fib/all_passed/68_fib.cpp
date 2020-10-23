#include<simplecpp>

main_program
{
    long long int n,b,c=0,a=1;
    int i=1;
    cin>> n;
    while(1)
    {
        b=a+c;
        c=a;
        a=b;

        i++;
        if(b==n)
            break;
        if(b>n)
        {
            i=-1;
            break;
        }

    }
if(n==0) cout<< "0";
else if(n==1) cout<<"1";
  else cout<< i;
}











