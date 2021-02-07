#include<simplecpp>

main_program{
int n, k, n1 = 0, n2 = 1, n3 = 0;
cin>>n>>k;
cout<<n1%k<<endl;
cout<<n2%k<<endl;
repeat(n-2){
    n3 = n1 + n2;
    cout<<n3%k<<endl;
    n1 = n2;
    n2 = n3;
    }
}




//cout<<4%10<<endl;


