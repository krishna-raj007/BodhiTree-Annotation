#include<simplecpp>

main_program{
int q;
cin>>q;
repeat(q)
{float n1,n2;
char op;
cin>>n1>>op>>n2;

switch(op)
{
case'+':cout<<n1+n2;cout<<endl;
break;
case'-':cout<<n1-n2;cout<<endl;
break;
case'*':cout<<n1*n2;cout<<endl;
break;
case'/':cout<<n1/n2;cout<<endl;
break;
default: cout<<-1<<endl; break;


}

}
}
