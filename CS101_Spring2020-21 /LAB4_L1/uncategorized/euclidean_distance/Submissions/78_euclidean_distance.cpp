#include<simplecpp>

main_program{

    int q;
	cin>>q;
	repeat(q){

	  float d = 0;
	  int n;
	  cin>>n;

	  repeat(n){
         long double a,b;
         cin>>a>>b;
	     d = sqrt( (d)*(d) + (a - b)*(a - b) );

	  }

	   printf("%.2f\n",d);

	}

}
