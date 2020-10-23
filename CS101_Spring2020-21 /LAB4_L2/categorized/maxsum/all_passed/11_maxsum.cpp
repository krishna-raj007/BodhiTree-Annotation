#include<simplecpp>

main_program{
int n,a,b,c;
c=0;

cin>>n;
cin>>a;
repeat(n-1){
cin>>b;
c=max(c,a+b);
a=b;
}
cout<<c;


}
