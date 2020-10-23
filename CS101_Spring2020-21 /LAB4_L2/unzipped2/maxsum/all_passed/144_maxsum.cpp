#include<simplecpp>

main_program{
int n;
long int n1, n2,n3, x, sum;
cin>> n;
cin>> n1;
cin>> n2;
x= n1+n2;
repeat(n-2){

cin >> n3;
sum=n2+n3;
if(sum>x)x=sum;
n2=n3;
}
cout<< x;}
