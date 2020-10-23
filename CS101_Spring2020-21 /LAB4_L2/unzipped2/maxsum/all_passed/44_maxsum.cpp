#include<simplecpp>
#include<iostream>

main_program{


long double n,a,b,sum=0,maximum=0;

cin>>n;

cin>>a;

sum = a;

repeat(n-1)
{
    cin>>b;

    sum = sum + b;

    maximum = max(sum,maximum);

    sum = b;




}

cout<<maximum;




}
