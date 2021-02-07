#include<simplecpp>

main_program{
//Write your code here
long unsigned int n;
long unsigned int k;
cin>>n;
cin>>k;
int a=0;
int b=1;

cout << a%k<<endl;
cout << b%k<<endl;
repeat(n-2){
int s;
s=(a+b)%k;
cout<<s<<endl;
a=b;
b=s;
}

}
