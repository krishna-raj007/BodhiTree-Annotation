#include<simplecpp>

main_program{
 unsigned long long int n,k;
 cin>>n>>k;
 long unsigned int a=0,b=1,x;

 if(n>=2){
   cout<<a%k<<endl;
   cout<<b%k<<endl;
   }
 else cout<<0;
   repeat(n-2){
     x=(a%k+b%k)%k;
     a=b;
     b=x;
     cout<<x<<endl;
    }

}



