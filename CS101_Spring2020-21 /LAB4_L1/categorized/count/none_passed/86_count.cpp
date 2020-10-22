#include<simplecpp>
main_program{
int query, number, command, p;
cin>>query;
repeat(query){
  cin>>number;
  command='1';
  p=0;
switch(command){
  case '1': if(number%2==0)
             p++;
  case '2': if(number%3==0)
             p++;
  case '3': if(number%5==0)
             p++;
  case '4': if(number%7==0)
             p++;
  case '5': if(number%11==0)
            p++;
}
 cout<<p;
}




}
