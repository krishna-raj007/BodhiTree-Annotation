
#include<simplecpp>
main_program{
int q,num,i=1,flag =0;
cin>>q;
repeat(q){
cin>>num;
switch(i){
case 1:
    if(num %2 == 0)flag++;
case 2:
    if(num%3 == 0)flag++;
case 3:
    if(num%5 == 0)flag++;
case 4:
    if(num%7 == 0)flag++;
case 5:
    if(num%11 == 0)flag++;
    break;
}
cout<<flag<<endl;
flag = 0;
}
}
