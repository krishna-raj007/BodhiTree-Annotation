#include<simplecpp>

main_program{

            int n1,n;

            cin>>n1;



            repeat(n1){
                 float Q=0.0;
              cin>>n;
            repeat(n){

                   float a,b;





                   cin>>a>>b;

                   Q=Q+(a-b)*(a-b);
                   }

                   float R=sqrt(Q);
                   printf("%.2f\n",R);
                  }
            }
