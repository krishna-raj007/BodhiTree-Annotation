#include<simplecpp>

main_program{
float p,q,s=0,a1,b1,n;
cin>>q;
repeat(q){
    cin>>n;s=0;
repeat(n){
    cin>>a1>>b1;
s=sqrt((a1-b1)*(a1-b1)+s*s);
}
printf("%.2f\n", s);

}
}
