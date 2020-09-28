#include<simplecpp>

main_program{
int n,x;
cin>>n;
repeat(n)
{int   m=0;
    cin>>x;
    if(x%2==0)
       m=m+1;
   if(x%3==0)
        m=m+1;
    if(x%5==0)
        m=m+1;
    if(x%7==0)
        m=m+1;
    if(x%11==0)
        m=m+1;
        cout<<m;
}
}
