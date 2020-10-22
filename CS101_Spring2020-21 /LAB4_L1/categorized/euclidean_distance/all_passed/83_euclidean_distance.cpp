#include<simplecpp>

main_program{
    int q;
    cin>>q;
    repeat(q){
        int n;
        cin>>n;
float a,b,d=0;
        repeat(n)
        {
           cin>>a>>b;
           d=d+(a-b)*(a-b);


        }
       float answer=sqrt(d);
        printf("%.2f\n",answer);
            }
}
