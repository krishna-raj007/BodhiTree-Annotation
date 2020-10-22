#include<simplecpp>

main_program{
long int a;
int rem,remain, q, count=0;
cin>>q;
repeat(q){
cin>>a;
count=0;
rem=a/2;
remain=a%2;
if(rem!=0 && remain==0){count++;};
rem=a/3;
remain=a%3;
if(rem!=0 && remain==0){count++;};
rem=a/5;
remain=a%5;
if(rem!=0 && remain==0){count++;};
rem=a/7;
remain=a%7;
if(rem!=0 && remain==0){count++;};
rem=a/11;
remain=a%11;
if(rem!=0 && remain==0){count++;};
cout<<count<<endl;
}
}
