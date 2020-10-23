#include<simplecpp>

main_program{
double t=1,j=1;
int n;
cin>>n;
repeat(n){

if(n=0){
cout<<4;}
else{
t=(t+(pow(-1,j))*(1.0/(2.0*j+1)));
j++;

}



}
cout<<t*4;


}
