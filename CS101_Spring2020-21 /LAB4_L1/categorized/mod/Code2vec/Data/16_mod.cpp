#include<simplecpp>

main_program{
    int q,n,x=0 ;
    cin>>q;
    repeat(q)
    {
        cin>>n;
        if(n%2==0)
        x++;
        if(n%3==0)
        x++;
        if(n%5==0)
        x++;
        if(n%7==0)
        x++;
        if(n%11==0)
        x++;
        cout<<x<<endl;
        x=0;
    }
}
