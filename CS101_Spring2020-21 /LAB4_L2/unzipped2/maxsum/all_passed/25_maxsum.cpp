#include<simplecpp>
main_program
{
long long int a1,a2, n;
cin>>n>>a1>>a2;
long long int maxi= a1+a2;
long long int ai=0,temp=a2;
repeat(n-2){
cin>>ai;
maxi=max(maxi,ai+temp);
temp=ai;
}
cout<<maxi;

}
