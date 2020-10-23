#include<simplecpp>
main_program{
int f0{0},f1{1},i{1},p{1},n;
bool found{false};
cin>>n;
while(p <= n){
if(n == p){
found=true;
break;}
p=f0+f1;
f0=f1;
f1=p;
i++;
}
if(n == 1 || n == 2)
{
cout<<1;}
else if(n == 0){
cout<<0;}
else if(found){
    cout<<i;
}
else{
cout<<-1;}
}
