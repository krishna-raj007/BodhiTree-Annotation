#include<simplecpp>
main_program{
int Q, N;
float a, b,s=0;
cin>>Q;
repeat(Q){
        cin>>N;
        s=0;
        repeat(N){
        cin>>a>>b;
        s=s+(a-b)*(a-b);

        }
        printf("%.2f\n",sqrt(s));

        }
}
