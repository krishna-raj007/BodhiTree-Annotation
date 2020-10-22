#include<simplecpp>

main_program{


long int a,i,n,m;
cin>>n>>m;
i=1;
repeat(n-1){
    n=n*i%m;
    i=i+1;
}

a=n%m;

cout<<a;

}
