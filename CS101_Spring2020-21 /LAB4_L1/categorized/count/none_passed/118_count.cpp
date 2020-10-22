#include<simplecpp>

main_program{
int Q,A;
cin>>Q;
repeat(Q){
cin>>A;
int f=0;
if(A%2==0)
    f=f+1;
if(A%3==0)
    f=f+1;
if(A%5==0)
    f=f+1;
if(A%7==0)
    f=f+1;
if(A%11==0)
    f=f+1;
cout<<f;
}

}
