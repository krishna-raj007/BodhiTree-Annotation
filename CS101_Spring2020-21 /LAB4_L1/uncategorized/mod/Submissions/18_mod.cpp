#include<simplecpp>

main_program{

long int n, a, m, prod=1;
cin>>n;
cin>>m;
a=1;
if(n==0){cout<<a%m;}
else{
repeat(n){
prod=((prod%m)*(a%m)%m);
a=a+1;
}

cout<<prod;
}


	//Write your code here

}
