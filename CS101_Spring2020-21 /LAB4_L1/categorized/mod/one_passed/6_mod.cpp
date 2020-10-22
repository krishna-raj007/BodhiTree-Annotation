#include<simplecpp>

main_program{
 long long int n,m,r=1,i=1;
 cin>>n>>m;
 repeat(n){

 r=(r*(i%m)%m);
 i++;
 }
cout<<r%m<<endl;

}
