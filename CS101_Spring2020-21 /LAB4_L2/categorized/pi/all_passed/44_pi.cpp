#include<simplecpp>
#include<iostream>

main_program{

long long int n,i=0;

long double storeval=0,answer;

cin>>n;

repeat(n+1)
{
    storeval = storeval +((pow(-1,i))/((2*i) + 1));

    i = i + 1;

}

answer = 4 * storeval;

cout<<answer<<endl;

}
