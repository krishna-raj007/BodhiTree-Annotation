#include<simplecpp>

main_program{

 int n,x=1,fib0=0,fib1=1,fib;
 cin>>n;
 if(n==0){
    cout<<"0";
 }
 if(n==1){
    cout<<"1";
     }
 if(n>=2){
 while(1){
 fib=fib0+fib1;
 fib0=fib1;
 fib1=fib;
 x++;
 if(fib>n)
 {

    cout<<"-1";
    break;
 }
 if(fib==n)
 {

     cout<<x;
     break;
 }
 }
}
}

