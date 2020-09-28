#include<simplecpp>
main_program{
int queries;
cin>>queries;
repeat(queries){
int dim;float euclid_dis=0.0;float z=0.0;
cin>>dim;
repeat(dim){
float a_dim, b_dim; float x;
cin>>a_dim>>b_dim;
x=pow(a_dim-b_dim,2);
z=z+x;
}
euclid_dis=sqrt(z);
printf("%.2f\n",euclid_dis);
}
}
