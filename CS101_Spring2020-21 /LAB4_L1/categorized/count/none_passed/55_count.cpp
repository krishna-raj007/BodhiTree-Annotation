#include<simplecpp>

main_program{
int n,a,i;

cin>>n;
repeat(n){
cin>>a;
i= 0;
if (a%2==0){i =i++;}
if (a%3==0){i =i++;}
if (a%5==0){i =i++;}
if (a%7==0){i =i++;}
if (a%11==0){i =i++;}
switch(i)


{
case 1:cout<<"1";break;
case 2 : cout<<"1";break;
case 3: cout<<"3";break;
case 4: cout<<"4";break;
case 5: cout<<"5";break;
default:cout<<"0\n";
}}
return 0;
}
