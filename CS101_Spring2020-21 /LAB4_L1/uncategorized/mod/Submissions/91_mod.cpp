#include<simplecpp>

main_program{

long int factorial=1;
int i=1,m,n,mod;
cin>>n>>m;
repeat(n){
factorial=(factorial*i)%m;
i=i+1;}

cout<< factorial;

}
