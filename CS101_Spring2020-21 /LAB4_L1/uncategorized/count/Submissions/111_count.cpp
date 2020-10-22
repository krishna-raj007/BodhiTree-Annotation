#include<simplecpp>
main_program{
int Q,A,i=0,f=2;
cin>>Q;
repeat(Q){
cin>>A;
i=0;
switch(f)
{case 2:if(A%2==0) i++;
    case 3:if(A%3==0) i++;
    case 5:if(A%5==0) i++;
    case 7:if(A%7==0) i++;
    case 11:if(A%11==0) i++;
}
cout<<i<<"\n";
}
}
