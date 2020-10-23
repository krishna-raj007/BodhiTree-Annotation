#include<simplecpp>

main_program{

	//Write your code here
	int n;
	double n1,n2,a;
	char c;
	cin >> n;

	repeat(n){
	cin >>n1;
	cin >> c;
	cin>>n2;
	switch(c){
        case '+':
                a=n1+n2;
                break;
        case '-':
                a=n1-n2;
                break;
        case '/':
                a=n1/n2;
                break;
        case '*':
                a=n1*n2;
                break;
        default :
                a=-1;
        }
        cout<<a<<endl;
	}

}
