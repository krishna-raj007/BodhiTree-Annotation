#include<simplecpp>

main_program{

	//Write your code here
	double n;
	double p=0;
	double a=0;
  int f=1;
  int b=-1;
	cin >> n;
	repeat(n+1){
     repeat(p){
       f=f*b;
     }
	a=a+f* (1/(2*p+1));
	p=p+1;
	}
  cout << 4*a << endl;
}
