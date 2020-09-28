#include<simplecpp>

main_program{
long  int q, n, a, b, k;
    cin>>q;

    repeat(q){
        cin>>n;
        int m=0;
        repeat(n){

        cin>>a>>b;
        k=(a-b)*(a-b);
        m=k+m;
        }
        float g=sqrt(m);
        printf("%.2f\n", g);






    }


}
