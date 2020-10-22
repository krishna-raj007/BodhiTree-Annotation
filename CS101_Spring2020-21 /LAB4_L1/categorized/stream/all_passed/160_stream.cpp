#include<simplecpp>

main_program
{
    int a=0, l=0;

    do
    {   cin>>a;
        if(a>l)
                l=a;
    }while(a!=-1);
    cout<<l;
}
