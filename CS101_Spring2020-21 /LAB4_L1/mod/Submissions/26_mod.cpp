#include<simplecpp>

main_program{
int n,m,y,p;
cin>>n,m;
long int x;
p=1;x=1;
repeat(n-1){
p=p++;
x=x*p;
}
y=x%m;
cout<<y<<endl;
 //Write your code here

}
