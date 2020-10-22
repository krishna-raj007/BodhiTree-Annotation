#include<simplecpp>

main_program{

 int x,y,z;
 cin>>x;
 cin>>y;
 long int s;
 z=1;
 s=1;
 repeat(x+1){
 z++;
 s=s*x;}
 cout<<s%y;

}
