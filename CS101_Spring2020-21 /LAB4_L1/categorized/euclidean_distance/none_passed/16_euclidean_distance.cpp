#include<simplecpp>

main_program{
    float a,b,p=0,c,e;
    int q,n;
    cin>>q;
    repeat(q){
    cin>>n;
    repeat(n){
    cin>>a>>b;
    c=a+b;
    c=c*c;
    p=p+c;
    e=sqrt(p);
    }
    printf("%.2f\n",e);

    }
}
