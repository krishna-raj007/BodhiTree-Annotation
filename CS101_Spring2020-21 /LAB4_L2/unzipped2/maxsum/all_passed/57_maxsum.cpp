#include<simplecpp>

main_program{
int n,a,b,c,d,e;

cin>>n;
cin>>a>>b;
d=a+b;
repeat(n-2){
cin>>c;
e=max(d,b+c);
a=b;
b=c;
d=e;

}

cout<< e;
}
