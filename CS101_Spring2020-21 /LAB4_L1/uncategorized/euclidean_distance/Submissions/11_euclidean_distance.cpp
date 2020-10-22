#include<simplecpp>

main_program{
int q,n,i; float a[i],b[i],answer,f;
cin>>q;
repeat(q){
i=0;answer=0;
cin>>n;
repeat(n){
cin>>a[i]>>b[i];
answer=(a[i]-b[i])*(a[i]-b[i])+answer;
i++;}
f=sqrt(answer);
printf("%.2f",f);
}
}
	//Write your code here}
