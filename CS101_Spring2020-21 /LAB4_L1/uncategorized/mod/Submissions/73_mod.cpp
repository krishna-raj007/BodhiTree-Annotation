#include<simplecpp>

main_program{
long int n,m;long int i=1 ;long int q=1;

cin>>n>>m;
repeat(n){


q=((q%m)*(i%m))%m;

i=i+1;
}
cout<<q<<endl;
}
