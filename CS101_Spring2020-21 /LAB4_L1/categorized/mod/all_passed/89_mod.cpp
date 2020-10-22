
#include<simplecpp>
main_program{
long int n,m,ans = 1;
cin>>n>>m;
for( long int i = 1;i<=n;i++){
ans  = (ans * (i%m))%m;
}
cout<<ans;
}

	//Write your code here


