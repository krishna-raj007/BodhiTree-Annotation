#include<simplecpp>

main_program{
int i;
int c=-1;
for(i=1;i>0;i++)
{
int a_i,b;
cin>>a_i;
c=max(a_i,c);
if(a_i==-1)break;
}

cout<<c;
}
