#include<simplecpp>

main_program{
    long int a,b,t=1,j=1;
	cin >> a >> b;

	repeat(a){
        t=((t%b)*(j%b))%b;
        j++;
	}
    cout << t;
}
