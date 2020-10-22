#include<simplecpp>

main_program{
int i,m,a,n,x;
int b[]= {2,3,5,7,11};
cin>>n;
repeat(n){
i=x=0;
cin>>a;
while(x<5){
    m= a% b[x];
    switch(m){
    case(0):
    i++;
    break;
    }
    x++;
}
cout<<i;
}
}
