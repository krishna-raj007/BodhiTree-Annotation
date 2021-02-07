#include<simplecpp>

main_program{
	int n,k;
	cin>>n>>k;
	int term1=0,term2=1;
	int ans1=term1%k,ans2=term2%k;
	cout<<ans1<<endl<<ans2<<endl;
	repeat((n-3)/2){
		ans1=(ans1+ans2)%k;
		ans2=(ans1+ans2)%k;
		cout<<ans1<<endl<<ans2<<endl;
		}
	ans1=ans1+ans2;
	ans2=ans1+ans2;
	if(n%2==0){
		cout<<ans1%k<<endl<<ans2%k<<endl;
		}
	else cout<<ans1%k<<endl;
	}
