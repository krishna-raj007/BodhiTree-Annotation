#include<simplecpp>
main_program{
double pi;
int n,i;

pi=1, i=1;
cin>> n;
repeat(n){

pi=pi + pow(-1,i)/(2*i+1);
i=i+1;
}
cout<< 4*pi;
}
