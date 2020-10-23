#include<simplecpp>

main_program{
int n,i;
cin>>n;
double s;
s=0;
i=0;
repeat(n+1){

if (i %2 == 0)
    s = (s+ 1.0/(2*i+1) );
else
 s=(s-1.0/(2*i+1));
 i++;
}
cout<<4*s<<endl;

}
