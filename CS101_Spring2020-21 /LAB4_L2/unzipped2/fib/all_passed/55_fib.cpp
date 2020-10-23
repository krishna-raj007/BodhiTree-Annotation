#include<simplecpp>
main_program{
int a0{0},a1{1},after{1},f{1},n;
bool found{false};
cin>> n ;
while(after <= n){
if(n == after){
 found = true;
break;
}
after=a0+a1;
a0=a1;
a1=after;
f++;
}
if(n == 1 || n == 2){
cout<< 1;
}
else if( n == 0){
 cout<< 0;
}
else if(found){
cout<< f;
}
else{
cout<< -1;
}
}
