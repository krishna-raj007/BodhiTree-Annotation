#include<simplecpp>
main_program{
 int Q,N;
 float a,b,sum,i,ans;
    cin>>Q;


    repeat(Q){
        cin>>N;
        sum=0;
        repeat(N){


            cin>>a>>b;
            i=(a-b)*(a-b);
            sum=sum+i;

        }
            ans=sqrt(sum);
            printf("%.2f\n",ans);
    }

}
