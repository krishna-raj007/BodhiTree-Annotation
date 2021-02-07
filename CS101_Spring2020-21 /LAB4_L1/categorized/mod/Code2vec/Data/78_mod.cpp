#include<simplecpp>

main_program{

    long int n,m,i=1,fac=1;
    cin>>n>>m;
    repeat(n){
        fac=fac*(i%m);
        i++;
        }
    cout<<fac%m;

	//Write your code here

}
