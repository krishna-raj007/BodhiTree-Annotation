#include<simplecpp>

main_program{

	//Write your code here
	 long long int n,i=0;
	double answer = 0;
	cin>>n;
	repeat(n+1)
        {
          answer = answer +(pow(-1,i))*1.0/((2*i)+1);
          i=i+1;
        }

        cout<<4*answer;
}
