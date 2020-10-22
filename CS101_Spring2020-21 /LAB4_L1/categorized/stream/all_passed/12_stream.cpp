#include<simplecpp>

main_program{
    int a,maxx=0;
    cin>>a;

    if(a!=-1)
        maxx=a;

    while(a!=-1)
    {
        cin>>a;
        if(maxx<a)
        maxx=a;

    }
    cout<<maxx;
}
