#include<simplecpp>
main_program
{
int n;
cin>>n;
repeat(n)
{
    int a;
    cin>>a;
    int sum=0;
    switch(a%2)
    {
        case 0:
            sum++;
            break;
        default:
            sum=sum;
    }
    switch(a%3)
    {
        case 0:
            sum++;
            break;
        default:
            sum=sum;
    }
        switch(a%5)
    {
        case 0:
            sum++;
            break;
        default:
            sum=sum;
    }
        switch(a%7)
    {
        case 0:
            sum++;
            break;
        default:
            sum=sum;
    }
        switch(a%11)
    {
        case 0:
            sum++;
            break;
        default:
            sum=sum;
    }
    cout<<sum;
}
}
