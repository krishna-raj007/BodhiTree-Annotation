#include<simplecpp>

main_program{

    int a,fib1=0,fib2=1,n=10^6,b=-1;


    cin>>a;

    if(a==0){

            b=0;

        }

    else
        {


            repeat(n){
                fib2+=fib1;

                if(a==fib2){
                     int i=0;
                     i++;
                     b=i;
            break;

                }

            }


    }

cout<<b<<endl;


}
