#include<simplecpp>

main_program{

	int n;

	cin >> n;

	float num1,num2,maximum;

	cin >> num1;
	maximum=0;

	repeat(n-1){


	cin >> num2;

	maximum= max(num1+num2,maximum);
	num1=num2;


	}
	cout<< maximum;
}
