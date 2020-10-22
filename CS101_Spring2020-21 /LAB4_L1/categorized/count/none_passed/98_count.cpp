#include<simplecpp>

main_program{

	int q,n,c;
	cin>>q;

	for(int i=1;i<=q;i++){
        cin>>n;
        c=0;
        if(n%2==0)
        {
            c++;
        }
        if(n%3==0)
        {
            c++;
        }
        if(n%5==0)
        {
            c++;
        }
        if(n%7==0)
        {
            c++;
        }
        if(n%11==0)
        {
            c++;
        }
        cout<<c;
	}



}
