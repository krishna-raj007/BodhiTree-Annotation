#include<simplecpp>

main_program{
//Write your code here

long  int n;
long int m;
cin>>n>>m;

if(n>=1&&n<=100000&&m>1&&m<=100000 ) {
long a=0;
long b=1;

long s;

cout<<a<<"\n";
cout<<b<<"\n";
while(n-2>0){
 s=(a+b)%m;

 cout<<s<<"\n";
 a=b;
 b=s;
n=n-1;
}



}

}
