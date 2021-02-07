#include<simplecpp>

main_program
{
long int x,n,first=0,second=1,third;
cin>>n>>x;
cout<<0<<"\n";
cout<<1<<"\n";
repeat(n-2)
{
    third=(first%x)+(second%x);
    first=second;
    second=third;
    cout<<third%x<<"\n";
}

}
