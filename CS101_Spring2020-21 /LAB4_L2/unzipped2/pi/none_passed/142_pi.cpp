#include<simplecpp>

main_program{
int n,i=1;
double answer,b,sum=0;
cin>>n;
repeat(n){
    b=((-1)*1.0)/(2*i+1);
    sum=sum+b;
    i++;
}
answer=4*(sum+1);
cout<< answer;

}
