#include<simplecpp>

main_program{

	int x=0, y=1, sum=0, a, i=2;
	cin>>a;
	if(a==0) cout<<"0";
	if(a==1) cout<<"1";
	if(a>=2){
    while(a>=sum){
	sum=x+y;
	x=y;
	y=sum;
	if(a==sum){
        cout<<i;
        break;}
    i++;
    }
    if(a!=sum) cout<<"-1";}
}
