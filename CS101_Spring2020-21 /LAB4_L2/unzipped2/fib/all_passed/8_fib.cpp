#include<simplecpp>

main_program{
    long long int n;
    cin>>n;
    long long int i=2;
    long long int a=0,b=1,c;
    while(true)
    {
        if(n==0)
        {
            cout<<"0";
            break;
        }
        else if(n==1)
        {
            cout<<"1";
            break;
        }
        else
        {
            c=a+b;
            if(n==c)
            {
                cout<<i;
                break;
            }
            a=b;
            b=c;
            i++;
            if(n<c)
            {
                cout<<"-1";
                break;
            }
        }
    }
}
