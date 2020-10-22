#include<simplecpp>

main_program{

int n, q;
float distance;
cin>>q;
repeat(q){
	float sum=0;
cin>> n;
repeat(n){
float a,b;
cin>>a>>b;
sum=sum+(b-a)*(b-a);}
distance= sqrt(sum);
printf("%.2f\n",distance);
}

}
