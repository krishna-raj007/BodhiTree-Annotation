#include<simplecpp>

main_program{
int n,a,b;
cin>>n>>a>>b;
int maximum{a+b};
if (n>2){
        repeat(n-2){
cin>>a;
if(a+b>maximum){
maximum= a + b;
}
b = a;
}
}
cout<<maximum;
}
