#include<simplecpp>

main_program{
int n;
float a,b,z;
 cin>>n;
 cin>>a>>b;
 z=a+b;
repeat(n-2){
  cin>>a;
  z=max(z,a+b);
  b=a;
}
cout<<z;

}
