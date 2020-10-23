#include<simplecpp>

main_program{


int n;
cin>>n;
long double T, r;
T=0 , r = 0;
repeat(n){
long double newT , newr;
cin>>newT;
newr=T+newT;
r=max(newr,r);
T=newT;
}
cout<<r;
}

