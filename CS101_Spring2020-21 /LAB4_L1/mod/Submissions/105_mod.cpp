#include<simplecpp>

main_program
{
    unsigned long int f=1,n,m;
    cin>>n>>m;      //take input from user
    repeat(n-1)     //Loop to calculate factorial
    {
        f=f*n%m;
        n--;
    }
    cout<<f;      //print the final output
}
