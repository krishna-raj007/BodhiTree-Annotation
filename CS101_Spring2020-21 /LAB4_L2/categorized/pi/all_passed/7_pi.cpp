#include<simplecpp>
main_program{
int n;
cin >> n;
int i;
i=0;
double ans;
ans=0;

repeat(n+1){
if(i%2==0)
ans=ans+((1*1.0)/(2*i+1));
else
ans=ans-((1*1.0)/(2*i+1));
i++;

}
cout << ans*4;

}
