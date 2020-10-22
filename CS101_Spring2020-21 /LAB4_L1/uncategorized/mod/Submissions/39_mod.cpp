#include <simplecpp>
main_program{
long int n,m;
cin >>n >>m;
int k=1;
long int nfac=1;
repeat(n){
nfac=((nfac%m)*(k%m))%m;
k++;
}
cout <<nfac;
}
