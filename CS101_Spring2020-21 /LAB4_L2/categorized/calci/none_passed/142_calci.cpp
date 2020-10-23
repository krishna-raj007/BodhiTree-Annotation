#include<simplecpp>

main_program{
    int n;
float a,b;
char c;
cin >>n;

repeat(n){
cin>>a>>c>>b;
if(c=='+')cout<<a+b;
else if (c=='-')cout<<a-b;
else if(c=='*')cout<<a*b;
else if(c=='/')cout<<a/b;
else cout<<"-1";
}
}
