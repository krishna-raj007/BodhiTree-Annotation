#include<simplecpp>
main_program{
long long int n;
long long int k;
cin>>n>>k;
long long int abb=0;
long long int ab=1;
long long int a=0;
cout<<"0\n1\n";
repeat(n-2){
a=abb+ab;
cout<<abs(a%k)<<"\n";
abb=ab;
ab=a;
}
}
