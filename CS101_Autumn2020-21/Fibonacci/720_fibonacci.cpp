#include<simplecpp>

main_program{
//Write your code here
long long int n,k,a=0,b=1,Fi=0;
cin>>n>>k;
cout<<a<<endl;
cout<<b<<endl;
while(n>2){

Fi=(a+b)%k;
cout<<Fi<<endl;
a=b;
b=Fi;
n--;
}


}
