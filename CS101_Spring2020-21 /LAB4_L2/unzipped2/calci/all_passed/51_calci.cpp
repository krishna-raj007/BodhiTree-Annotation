#include<simplecpp>

main_program{

	//Write your code here
	int n; cin>>n;
	char operator1;
	for (int i=1;i<=n; i++){
            float a, b;
            cin>>a >> operator1 >>b;
            switch(operator1){
            case '+': cout<<a+b<<endl; break;
            case '-' : cout<<a-b<<endl; break;
            case '/' : cout<<a/b<<endl; break;
            case '*' : cout<<a*b<<endl; break;
            default : cout<<"-1"<<endl;


            }

	}


}
