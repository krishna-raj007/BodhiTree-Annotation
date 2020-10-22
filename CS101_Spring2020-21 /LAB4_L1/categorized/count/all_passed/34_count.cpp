#include<simplecpp>
main_program{
int a,n,i;
cin>>n;
repeat(n){
cin>>a;
i=0;
switch(a%2){
case 0:
    i=1;
}
switch(a%3){
case 0:
    i=i+1;
}switch(a%5){
case 0:
    i=i+1;
}switch(a%7){
case 0:
    i=i+1;
}switch(a%11){
case 0:
    i=i+1;

}
cout<<i<<endl;
}
}



