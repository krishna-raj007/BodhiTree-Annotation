#include<simplecpp>

main_program{

long int n,m,a=1,b=1,c;
cin >>n>>m;
repeat(n)
{
    a=a*b;
    b++;
}
c=a%m;
cout <<c;
}
