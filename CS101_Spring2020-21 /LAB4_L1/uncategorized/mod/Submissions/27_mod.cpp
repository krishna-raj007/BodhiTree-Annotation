#include<simplecpp>

main_program{
long long int n,m;
cin>>n>>m;
long long int i= n-1;
while(i>0){
n=n%m * i%m ;
i--;
}
cout<< n ;
}
