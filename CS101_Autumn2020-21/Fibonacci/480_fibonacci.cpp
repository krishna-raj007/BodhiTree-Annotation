#include<simplecpp>

main_program{
 long long int n,k, a=0,b=1,c=1 ,d;
 cin>>n>>k ;
 cout<<"0"<<endl<<"1"<<endl ;
 repeat(n-2){ a=a%k;
  b=b%k;  c =(a + b)%k ;
  cout<<c<<endl;
  a =b;  b=c ;
  }

}
