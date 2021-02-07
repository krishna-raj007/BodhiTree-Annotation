#include<simplecpp>

main_program{
 int n, k, t0=0, t1=1,r;
 cin>>n>>k;
 cout<<t0<<"\n"<<t1<<endl;

 repeat(n-2){
    r=t0+t1;
    t0=t1;
    t1=r;


   cout<<r%10<<endl;





 }


}
