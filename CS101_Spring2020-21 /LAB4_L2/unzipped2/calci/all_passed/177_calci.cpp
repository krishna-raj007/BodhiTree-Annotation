#include<simplecpp>

main_program{

	//Write your code here
	int q;
	float n1,n2;
	char op;
	cin>>q;
	while(q--){
        cin>>n1>>op>>n2;
        if(op == '+') cout << n1 + n2 << "\n";
        else if(op == '-') cout << n1 - n2 << "\n";
        else if(op == '*') cout << n1 * n2 << "\n";
        else if(op == '/') cout << n1 / n2 << "\n";
        else cout<<-1<<"\n";
	}

}
