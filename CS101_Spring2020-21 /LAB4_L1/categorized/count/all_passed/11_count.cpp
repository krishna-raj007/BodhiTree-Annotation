#include<simplecpp>

main_program{
int q,i=0,j=0,b[j],a;
cin>>q;
repeat(q){
cin>>a;
if (a%2==0)
i++;
if (a%3==0)
i++;
if (a%5==0)
i++;
if (a%7==0)
i++;
if (a%11==0)
i++;
b[j]=i;
i=0;
j++;}
j=0;
repeat(q){
cout<<b[j]<<"\n";
j++;}
	//Write your code here

}
