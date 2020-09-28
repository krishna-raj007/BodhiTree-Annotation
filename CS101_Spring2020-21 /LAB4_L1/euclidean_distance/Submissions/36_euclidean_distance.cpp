#include<simplecpp>

main_program{
float query;
cin>>query;
repeat(query){
float dimensions;
cin>>dimensions;
float n=0.0;
repeat(dimensions){
float a;
float b;
cin>>a;
cin>>b;
n=(b-a)*(b-a)+n;}
printf("%0.2f\n", sqrt(n));
}



}
