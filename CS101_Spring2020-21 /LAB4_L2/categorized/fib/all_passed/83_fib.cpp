#include<simplecpp>

main_program{

	//Write your code here
	int n;
	int c=1;
	int s1=0,s2=1,s=0;
	cin >> n;
	bool f=true;
if(n==1){cout << 1;f=false;}
else if(n==0){cout << 0;f=false;}
else{
	for(int i=1;i<=n;i++){
	s=s1+s2;
	s1=s2;
	s2=s;
	if(n==s){cout<<(c+1);f=false;break;}
	c++;
	}}
if(f){cout<<-1;}
}
