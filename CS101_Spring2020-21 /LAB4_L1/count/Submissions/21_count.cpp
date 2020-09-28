#include<simplecpp>

main_program
{
    int Q,A,i;
    cin>>Q;
    repeat(Q)
    {
        i=0;
        cin>>A;
        if(A%2==0)i++;
        if(A%3==0)i++;
        if(A%5==0)i++;
        if(A%7==0)i++;
        if(A%11==0)i++;
        cout<<i<<"\n";
    }
}
