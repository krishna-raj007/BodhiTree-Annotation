#include<simplecpp>
main_program{
unsigned long long int n; cin>>n;
unsigned long long int m; cin>>m;
unsigned long long int i=0;
unsigned long long int ans=1;
repeat(n){
        i+=1;
        ans=ans*i;
}
cout<<ans%m;
}
