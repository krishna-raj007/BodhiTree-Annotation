#include<simplecpp>

main_program{
long int n,m,t=1 , p=1;
cin >> n >> m ;
if(n<=100*100*10 && m<=1000*1000*1000)
repeat(n){
p=(p*t)%m;
t++;
}
cout << p%m ;


}
