#include<simplecpp>

main_program{

    double n, i=1, sum=1;

    cin>>n;

    repeat(n){
        sum=sum+ pow(-1,i)*1/(2*i+1);
        i++;
    }

    cout<<4*sum;

}
