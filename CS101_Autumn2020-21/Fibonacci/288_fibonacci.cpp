#include<simplecpp>

main_program{
//Write your code here
int n,k;
cin>>n>>k;
int term,pt1=1,pt2=0;
cout<<"0"<<endl<<"1"<<endl;
repeat(n-2){
 term=pt1+pt2;
 cout<<term<<endl;
 pt2=pt1;
 pt1=term;
 }

 }



