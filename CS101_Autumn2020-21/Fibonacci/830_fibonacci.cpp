#include<simplecpp>

main_program{
int n{},k{};


int fn1=0;
int fn2=1;

cin>>n;
cin>>k;

cout<<fn1<<'\n';
n-=1;


while(n>0){

       cout<<fn2<<'\n';
       int fn3;
       fn3=(fn1+fn2)%k;

       fn1=fn2;
       fn2=fn3;
       n-=1;




     }


}
