#include<simplecpp>
main_program{
    int n;
    cin>>n;
    repeat(n){int e;float d=0;
    cin>>e;
    repeat(e){float a,b,c;
    cin>>a>>b;
    c=(b-a)*(b-a);
    d=d+c;
    }
    float result;
    result=sqrt(d);
    printf("%.2f\n", result);}
}
