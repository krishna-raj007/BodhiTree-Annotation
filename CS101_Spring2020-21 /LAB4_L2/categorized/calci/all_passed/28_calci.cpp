#include<simplecpp>

main_program{

	int q;
	float Num1,Num2;
	char op;
	cin>>q;
	repeat(q){
	 cin>>Num1>>op>>Num2;
	 switch(op){

	  case '+': cout<<"\n"<<Num1+Num2<<endl;
	            break;
	  case '-': cout<<"\n"<<Num1-Num2<<endl;
	            break;
	  case '*': cout<<"\n"<<Num1*Num2<<endl;
	            break;
	  case '/': cout<<"\n"<<Num1/Num2<<endl;
	            break;
	  default: cout<<"\n"<<"-1";
     }
    }
}
