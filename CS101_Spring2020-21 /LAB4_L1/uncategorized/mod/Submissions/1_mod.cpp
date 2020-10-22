#include<simplecpp>

main_program{

long int k=1,m,n,i=1;
cin>>n>>m;

while(k<=n){

i=i*k;
k++;
i=i%m;
}
cout<<i;

}
