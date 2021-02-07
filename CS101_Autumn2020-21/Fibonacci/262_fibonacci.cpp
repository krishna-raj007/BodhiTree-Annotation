#include<simplecpp>
main_program{
long long int n,k,a=0,b=1,x;
cin>>n>>k;
cout<<a<<endl<<b<<endl;

repeat(n-2){
x=b%k;
b+=a%k;
a=x%k;

cout<<(b%k)<<endl;

}


}


