#include<simplecpp>
main_program{
int noofquery ; cin>>noofquery;
repeat(noofquery){
        double sum=0;
        double a,b;
        int dim ;
        cin>> dim;
            repeat(dim){
                    cin>>a>>b;
                    sum += pow(abs(a-b),2);
                    }
printf("%.2f\n",sqrt(sum));

}



}
