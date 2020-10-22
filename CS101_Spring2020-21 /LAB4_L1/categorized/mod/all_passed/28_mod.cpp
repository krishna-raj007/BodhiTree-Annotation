#include<simplecpp>

main_program{
long unsigned int res=1,n,m;
cin>>n>>m;
for(int i=1;i<=n;i++){
    res*=i%m;
    res=res%m;
    }
    //cout<<res<<endl;
    res=res%m;
    cout<<res;
	//Write your code here

}
