#include<simplecpp>
main_program{
long int n,i=1,m,s,factorial=1,answer;
cin>>n>>m;
repeat(n){factorial=((factorial%m)*(i%m))%m;
    i++;


}
cout<<factorial;}


