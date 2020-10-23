#include<simplecpp>

main_program{

	long int a=0 , b=1 , n, i=1;
	cin>>n;

while(b<n){
    long int newb=a+b;
    a=b;
    b=newb;
    i++;


}
if(b==n)cout<<i;
else if(b>n&&n!=0) cout<<"-1";
else if (n==0) cout <<"0";
}
