#include<simplecpp>

main_program{
int n,x,t;
cin>>n;
repeat(n){
cin>>x;
t=0;
switch(1){
case 1: if(x%2==0)
t++;
case 2: if(x%3==0)
t++;
case 3: if(x%5==0)
t++;
case 4: if(x%7==0)
t++;
case 5: if(x%11==0)
t++;
cout<<t<<"\n";
}}

	//Write your code here

}
