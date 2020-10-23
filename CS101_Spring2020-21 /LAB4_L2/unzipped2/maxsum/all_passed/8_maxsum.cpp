#include<simplecpp>

main_program{
int n,a,b;
cin>>n;
cin>>a>>b;
int maxi{a+b};
if(n>2){
    repeat(n-2){
    cin>>a;
    if (a + b > maxi){
        maxi= a + b;
        }
        b=a;
    }
}
    cout<<maxi;
}








