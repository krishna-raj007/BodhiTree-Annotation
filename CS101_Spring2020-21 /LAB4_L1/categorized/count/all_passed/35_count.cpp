#include<simplecpp>

main_program{

	long int num,queries;
	cin>>queries;
	repeat(queries){
	  cin>>num;
	  long int c=0;

	     if(num%2==0){c=c+1;}
	      if(num%3==0){c=c+1;}
	      if(num%5==0){c=c+1;}
	      if(num%7==0){c=c+1;}
	      if(num%11==0){c=c+1;}

	  cout<<c<<endl;
	}



}
