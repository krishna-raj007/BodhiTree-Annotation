#include<simplecpp>

main_program{
int n,q,i;
cin>>q;
repeat(q)
{cin>>n;
i=0;
if(!(n%2))i++;
if(!(n%3))i++;
if(!(n%5))i++;
if(!(n%7))i++;
if(!(n%11))i++;
cout<<i<<endl;
}

}
