#include<simplecpp>

main_program{

int a,b,c,m;
int n;

cin>>n;
a=1,b=1;

repeat(n){
   a=a*b;
   b=b+1;

}

   cin>>m;

   c= a%m;
   cout<< c <<endl;




}
