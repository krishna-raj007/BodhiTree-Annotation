#include<simplecpp>
main_program{
long int num;
int query,counter;
cin>>query;
repeat(query){
    cin>>num;
    counter=0;
    if(num%2==0)
        counter++;
    if(num%3==0)
        counter++;
        if(num%5==0)
        counter++;
        if(num%7==0)
        counter++;
        if(num%11==0)
        counter++;
cout<<counter;}
 }
