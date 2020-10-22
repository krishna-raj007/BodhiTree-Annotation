#include<simplecpp>

main_program{
long int n, i=0, m, c=1;
cin>>n>>m;
repeat(n){
i++;
c=((i%m)*(c))%m;
}
cout<<c;
}
