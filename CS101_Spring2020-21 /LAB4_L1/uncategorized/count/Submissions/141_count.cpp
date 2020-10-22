#include<simplecpp>
main_program{
int Q, A, i;
cin>>Q;
repeat(Q){
cin>>A;
i=0;
if(A%2==0)
i=i+1;
if(A%3==0)
i=i+1;
if(A%5==0)
i=i+1;
if(A%7==0)
i=i+1;
if(A%11==0)
i=i+1;
cout<<i<<endl;
}

}

