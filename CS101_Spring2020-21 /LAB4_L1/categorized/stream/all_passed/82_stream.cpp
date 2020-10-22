#include<simplecpp>

main_program
{
    int n;
    int x=-11121;
    cin>>n;
    while(n!=-1)
    {
        if (n>x)
            x=n;
        cin>>n;
    }
    cout<<x;

}
