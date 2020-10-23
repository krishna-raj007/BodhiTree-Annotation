#include<simplecpp>

main_program{
int n;
double a,b,c,s;
cin>>n;
cin>>a>>b;
s=a+b;
repeat(n-2){
cin>>c;
s=max(s,b+c);
b=c;


}cout<<s;

}
