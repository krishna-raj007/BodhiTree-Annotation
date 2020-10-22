#include<simplecpp>
main_program{
float q,n;cin>>q;
repeat(q){float d=0;
cin>>n;
repeat(n){
float a,b;
cin>>a>>b;
d=d+(a-b)*(a-b);
}printf("%.2f\n",sqrt(d));
}
}
