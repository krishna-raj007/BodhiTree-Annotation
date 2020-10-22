#include<simplecpp>
main_program{
long int n,m,b=1;
cin >> n  >> m;
repeat(n){
b=b*n;
b=b%m;
n=n-1;
}
cout <<b;
}
