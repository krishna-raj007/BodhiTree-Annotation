#include<simplecpp>

main_program{
long int i=1,n;
cin>>n;
int nfac=1;
repeat(n){
nfac=nfac*i;
i=i+1;
}
long int m;
cin>>m;
cout<< nfac%m <<endl;

}
