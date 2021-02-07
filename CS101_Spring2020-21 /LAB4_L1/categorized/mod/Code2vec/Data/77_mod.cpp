#include<simplecpp>

main_program{
long int n,m,c;
cin>>n>>m;
int a=1,b=1;
repeat(n){
a=a*b;
b=b+1;
}
c=a%m;
cout<<c;


}
