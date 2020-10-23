#include<simplecpp>

main_program{
    int n;
    cin>>n;
    repeat(n)
    {


        int a,b;
        char q;
        cin>>a>>q>>b;
        if( q=='+')
        {
            cout<<a+b;}
        else if (q=='-')
        {
            cout<<a-b;}
        else if (q=='*')
        {
            cout<<a*b;}
        else if (q=='/')
        {
            cout<<a/b;}
        else
        {
            cout<<"-1";}
        }
        cout<<"\n";
        }








