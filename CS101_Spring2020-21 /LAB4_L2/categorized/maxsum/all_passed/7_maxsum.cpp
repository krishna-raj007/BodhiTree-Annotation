#include<simplecpp>

main_program{
long int n;
cin >>n;
long int a,b,c,d,e,m;
cin >>a >>b;
m=a+b;
d=b;
repeat(n-2){
    cin  >> c;
    e=c+d;
    m=max(m,e);
    d=c;




}
cout << m;

}
