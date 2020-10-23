#include<simplecpp>

main_program{

   long int n,a,b=0,s,maxtillnow=0;
	cin>>n;

	repeat(n){
        cin>>a;

        s=a+b;

        if( s>maxtillnow){
            maxtillnow = s;
        }

        b = a;

	}

    cout<<maxtillnow;

}
