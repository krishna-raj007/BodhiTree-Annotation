#include<simplecpp>

main_program{
    long long int n;
    int a=0,b=1,x=1;
    int c;
    cin>>n;
    while(c<n)
    {
        c=a+b;
        a=b;
        b=c;
        x++;
    }
    if(c>n)
    {
        cout<<-1;
    }
    else if(c==1)
    {
        cout<<1;
    }
    else if(c==n)
    {
        cout<<x;
    }





	//Write your code here

}
