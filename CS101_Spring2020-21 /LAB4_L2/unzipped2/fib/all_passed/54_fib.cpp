#include<simplecpp>

main_program{
int a=0,b=1,c=0,x=1,n;
cin >>n;
if (n==0){
cout <<"0" <<endl;
}
else{
while (c<n){
c=a+b;
a=b;
b=c;
++x;
}
if (c==n){
cout <<x <<endl;
}
else {
cout <<"-1";
}
}
}
