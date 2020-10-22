#include<simplecpp>

main_program{

  int a,b,c = 0;
  cin>>a;
  for(int i=0;i<a;i++)
  {
      cin>>b;
      c=0;
      switch(2){

  case 2:
    if(b%2==0){
       c++;
    }
  case 3:
    if(b%3==0){
        c++;}
  case 5:
    if(b%5==0){
        c++;}
  case 7:
    if(b%7==0){
        c++;}
  case 11:
    if(b%11==0){
        c++;}
      }
      cout<< c << endl;}



}
