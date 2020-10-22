#include<simplecpp>
main_program{
int n,A,i=0;
cin>>n;
repeat(n){
cin>>A;
if(A%2==0)
i=i+1;
else
if(A%3==0)
i++;
else
if(A%5==0)
i++;
else
if(A%7==0)
i++;
else
if(A%11==0)
i++;
cout<<i;
}
}

