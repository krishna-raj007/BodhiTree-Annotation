#include<simplecpp>

main_program{
long int a,b,i=1,s=1;
cin>>a>>b;
repeat(a){
cout<<a<<" "<<b<<" "<<i<<" "<<s<<" "<<endl;
s=s*i;
cout<<a<<" "<<b<<" "<<i<<" "<<s<<" "<<endl;
s=s%b;
cout<<a<<" "<<b<<" "<<i<<" "<<s<<" "<<endl;
i++;
cout<<a<<" "<<b<<" "<<i<<" "<<s<<" "<<endl;
a==s;
}
cout<< s%b<<endl;



}
