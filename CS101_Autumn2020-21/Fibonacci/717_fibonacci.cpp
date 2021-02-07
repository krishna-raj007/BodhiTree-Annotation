#include<simplecpp>


main_program{
 unsigned long int n,k,x=0,y=1,w;
 cin>>n>>k;
 cout<<x<<"\n"<<y<<"\n";
 repeat(n-2){w=(x+y)%k;cout<<w<<"\n";x=y;
 y=w;}


}
