
main_program{

	//Write your code here
double n=1,x,term=1;
cin>>x;
repeat(x){
term=term+((pow(-1,n))*(1/((2*n)+1)));
n=n+1;
}
term=term*4;
cout<<term;
}

