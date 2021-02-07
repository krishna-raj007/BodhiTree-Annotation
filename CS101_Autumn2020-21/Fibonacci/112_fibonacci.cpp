#include<simplecpp>

main_program{

int n,k,a=0,b=1,c;
cin>>n>>k;

if(n==1){cout<<a%k<<endl;}
else {cout<<a%k<<endl;
      cout<<b%k<<endl;}

a=a%k;b=b%k;
repeat(n-2){
    c=a%k+b%k;
    cout<<c%k<<endl;
    a=b;
    b=c;
    }

}
