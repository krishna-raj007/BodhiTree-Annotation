#include<simplecpp>

main_program{

int n;
double i=1,term=1,result=0, answer,q=1;
cin>>n;
repeat(n+1)
{
term= term/i;
result = result + pow(-1,q+1)*term;
i= 2*i+1;
q=q+1;
}

answer= result*4;
cout<<answer<<endl;



}
