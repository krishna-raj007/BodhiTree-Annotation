#include<simplecpp>

main_program{
    long int n;
    cin>>n;
    long int x,y,sum;
    x=0;
    y=1;
    int index;
    index=1;
    while(y<n)
    {
       sum=x+y;
       x=y;
       y=sum;
       index++;
    }
    if(y==n)
        cout<<index;
    else if(n==0)
        cout<<0;
    else
        cout<<-1;
}
