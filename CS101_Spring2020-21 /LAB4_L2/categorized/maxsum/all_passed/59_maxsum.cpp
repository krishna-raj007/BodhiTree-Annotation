#include<simplecpp>

main_program{
    int n,a,b,c,d,l;
    cin>>n;
    cin>>a>>b;
    cin>>c;
    l=max(a+b,b+c);
    repeat(n-3)
    {
        cin>>d;
        a=b;
        b=c;
        c=d;
        if(l<max(a+b,b+c))
        {
            l=max(a+b,b+c);
        }
    }
    cout<<l;

	//Write your code here

}
