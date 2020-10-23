#include<simplecpp>

main_program{

	int n;
	cin>>n;
	char command;
	repeat(n){
	float a,b;
	cin>>a>>command>>b;
	float r;
	switch(command){
	case '+': r=a+b;cout<<r<<endl;
	          break;
	case '-': r=a-b;cout<<r<<endl;
              break;
    case '*': r=a*b;cout<<r<<endl;
              break;
	case '/': r=a/b;cout<<r<<endl;
            break;
     default : cout<<"-1";

	}
	}

}
