#include<simplecpp>

main_program{
int n;
cin>>n;
repeat(n){
int q,a=0;
cin>>q;
if(q%2==0)
    a++;
if(q%3==0)
    a++;
if(q%5==0)
    a++;
if(q%7==0)
    a++;
if(q%11==0)
    a++;
    cout<<a<<endl;



}
}
