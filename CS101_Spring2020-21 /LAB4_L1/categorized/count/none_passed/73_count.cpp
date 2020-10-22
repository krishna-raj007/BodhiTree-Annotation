#include<simplecpp>
main_program{
int p;
cin>>p;
repeat(p){
int q;
cin>>q;
int count =0;
if(q%2==0)
count++;
if (q%3==0)
count++;
if (q%5==0)
count++;
if (q%7==0)
count++;
if(q%11==0)
count++;
cout<<count;
}
}
