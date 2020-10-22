#include<simplecpp>

main_program{
long int a,b,i=1,s=1;
cin>>a>>b;
repeat(a){
s=s*i;
s=s%b;
i++;
a==s;
}
cout<< s%b<<endl;



}
