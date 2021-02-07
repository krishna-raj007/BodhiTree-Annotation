#include<sim.h>
main_program
{
    int n,k,fn,i,fa=0,fb=1;
    cin>>n>>k;
    if (n==1)
        cout<<0;
    else if(k==1){
    repeat(n){
        cout<<0<<"\n";}}
    else if(n==2&&k!=1)
        cout<<0<<"\n"<<1;

    else{
    cout<<0<<"\n"<<1<<"\n";
    {
        for (i=2;i<n;i++)
    {

        fn=(fa+fb)%k;
        cout<<fn<<"\n";
        fa=fb;
        fb=fn;


    }

    }
}
}
