#include<simplecpp>

main_program{

	int n,a,b=0,s,d=0;
    cin>>n;
    repeat(n){
    cin>>a;
    s=a+b;
    b=a;
    s=max(s,d);
    d=s;
    }
    cout<<s;

}
