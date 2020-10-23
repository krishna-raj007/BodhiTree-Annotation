#include<simplecpp>

main_program{

	//Write your code here
int n, a ,b; cin >> n >> a >> b;
int maxi{a+b};
    if (n>2)
        {repeat (n-2)
            {cin >>a ;
            if (a+b>maxi )
            {maxi = a+b ;
            }
            b=a ; }
    }
cout << maxi ;





}
