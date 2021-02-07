#include<simplecpp>

main_program{
//Write your code here
long long n, k, a=0, b=1, t, i;
cin>>n>>k;
cout<<0<<endl;
if(n>1){

for(i=0; i<n-1; i++){
t=a%k;
a=a%k+b%k;
b=t;
cout<<a%k<<endl;
}

}
}
