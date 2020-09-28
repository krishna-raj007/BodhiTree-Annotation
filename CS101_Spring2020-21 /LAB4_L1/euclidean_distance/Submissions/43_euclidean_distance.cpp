#include<simplecpp>

main_program{float a,b,a1,b1,q,n,s;
cin>>q;


repeat(q)
{
cin>>n;s=0;
repeat(n)
{cin>>a1>>b1;
s=sqrt((a1-b1)*(a1-b1)+s*s);
}
printf("%.2f\n", s);
}
}
