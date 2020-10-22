#include<simplecpp>

main_program
{

    int Q,N;
    cin>>Q;             //queries

    repeat(Q)
    {
        cin>>N;         //dimensions
        float a,b;
        float distance=0;
        repeat(N){              //input

            cin>>a>>b;
            distance+=((a-b)*(a-b));


        }
       distance=sqrt(distance);

       printf("%.2f\n",distance);
    }
}
