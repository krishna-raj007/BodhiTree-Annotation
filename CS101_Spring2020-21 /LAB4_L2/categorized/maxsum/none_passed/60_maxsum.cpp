#include<simplecpp>

main_program{
int q;
cin>>q;
long long int a1,a2, s;
cin>>a1;

a2=a1;
s=a1;
repeat(q-1)
{
cin>>a1;
 if(a1>s)
 {   s=a1;
 }
 if(a2>a1)
 {    s=a2;
 }


}
cout<<s;
}
