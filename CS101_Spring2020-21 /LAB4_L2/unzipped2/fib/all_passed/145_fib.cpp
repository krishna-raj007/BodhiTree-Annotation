#include<simplecpp>

main_program{

	//Write your code here
int n,a,b,c,d,e,t;
cin>>n;
a=0;b=1;c=1;e=0;
if(n==0)

{cout<<"0"<<endl;
return 0;
}
else if(n==1) {cout<<"1"<<endl;return 0;}
 while(n>=c && n>=2){
t=n-c;
d=e;
e=e+1;
c=a+b;
a=b;
b=c;
};
if(t==0)cout<<e<<endl;
else cout<<"-1"<<endl;

}
