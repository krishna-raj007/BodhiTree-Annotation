#include<simplecpp>

main_program{
int n=0;
int n1=0;
int s1=0;
int s2=0;
int s3=0;
int d=0;
cin>>n;
for(int i=1;i<=n;i++)
{s1=s1-n1;
d=n1;
cin>>n1;

s1=s1+n1;
s2=s2+s1;
s3=max(s3,s2);
s2=s2-d;
}
cout<<s3;
	//Write your code here

}
