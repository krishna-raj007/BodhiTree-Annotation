#include<simplecpp>

main_program{
int f0{0};f1{1},next{1},n,i{1};
bool found(false);
cin>>n;
while(next <= n){
    if( n == next){
        found=true;
        break;
    }
    next = f0+f1;
    f0=f1;
    f1=next;
    i++;
    }
    if(n=1)


