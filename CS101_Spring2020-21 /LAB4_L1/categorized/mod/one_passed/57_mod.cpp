#include<simplecpp>

main_program{
   long int i=1,n,m,f;

cin>>n>>m;
repeat(n){
    f=i%m;
    f=((f%m)*(i%m))%m;
}

cout<<f;


}
