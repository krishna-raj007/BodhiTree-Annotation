#include<simplecpp>

main_program{

	int n,Q;
	float x,a,b,p;
	cin>>Q;

    repeat(Q){  cin>>n;

        p=0;

         repeat(n){ cin>>a>>b;
             p += (a-b)*(a-b) ;
         }


           x=sqrt(p);
           printf("%.2f\n",x);



        }

}
