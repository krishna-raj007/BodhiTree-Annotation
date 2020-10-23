#include<simplecpp>

main_program{

	int n,a,b,f,p=2;

	cin>>n;
	b=1;
	a=0;
	f=a+b;
	if(n==0){
    p=0;cout<< p;}
    else if(n==1){
    p=1;cout<< p;}
    else{

	for(f=a+b;f<=n;p++,f=a+b)
    {
    a=b;
    b=f;
    if(f==n){
        cout<< p;
    break;
    }

    }

    if(f!=n)
        cout<<-1;

    }

}


