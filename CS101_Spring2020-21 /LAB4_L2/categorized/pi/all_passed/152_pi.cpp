#include<simplecpp>

main_program{

int n;
cin>>n;

double sum,term,i;
sum=4;
term=(-1.0/3);
i=1;

repeat(n){

sum=sum+(4*term);

i++;

term=pow(-1,i)*1.0/((2*i)+1);


}

cout<<sum;
}
