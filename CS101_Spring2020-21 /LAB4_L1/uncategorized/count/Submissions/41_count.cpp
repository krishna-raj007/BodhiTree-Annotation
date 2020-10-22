#include<simplecpp>
main_program{
  int Q,n,c=0;
  cin>>Q;
  repeat(Q){
     cin>>n;
     c=0;
     switch(n%2){
     case 0: c++;}
     switch(n%3){
     case 0: c++;}
     switch(n%5){
     case 0: c++;}
     switch(n%7){
     case 0: c++;}
     switch(n%11){
     case 0:c++;}
     cout<<c; }
}
