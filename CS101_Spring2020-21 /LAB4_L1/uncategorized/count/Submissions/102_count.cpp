#include<simplecpp>
main_program{
int queries,A,answer=0;
cin>>queries;
repeat(queries){answer=0;
cin>>A;
if(A%2==0)
    answer+=1;
    else answer=answer;
    if(A%3==0)
    answer+=1;
    else answer=answer;
    if(A%5==0)
    answer+=1;
    else answer=answer;
    if(A%7==0)
    answer+=1;
    else answer=answer;
    if(A%11==0)
    answer+=1;
    else answer=answer;
    cout<<answer;
}}
