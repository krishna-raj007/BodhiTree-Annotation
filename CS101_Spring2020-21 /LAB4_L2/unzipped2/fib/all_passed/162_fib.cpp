#include<simplecpp>

main_program{
int t,x,y,i,s;
x=0;
y=1;
s=0;
i=2;
cin>>t;
if(t==0)cout<<"0";
if(t==1)cout<<"1";
if(t>=2){
    while(t>=s){
        s=x+y;
        x=y;
        y=s;
        if(t==s){
            cout<<i;
            break;}
i++;
    }
    if(t!=s)cout<<"-1";}
}
