#include<simplecpp>

main_program{

	int n;
	float num1,num2,answer;
	char opera;

	cin>>n;

	repeat(n)
	{
	    cin>>num1;
	    cin>>opera;
	    cin>>num2;

	    switch(opera)
	    {
        case '+':
            answer=num1+num2;
            break;
        case '-':
            answer=num1-num2;
            break;
        case '*':
            answer=num1*num2;
            break;
        case '/':
            answer=num1/num2;
            break;
        default: answer=-1;
	    }
	    cout<<answer<<" ";
	}




}
