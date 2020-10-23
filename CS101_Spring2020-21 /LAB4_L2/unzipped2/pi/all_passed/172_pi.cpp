#include<simplecpp>

main_program{
int m;
cin>>m;
int i=1;
float ans=0;
repeat(m){
if(i%2==0){
ans += 1.0/((2*i)+1);
}
else{
ans -= 1.0/((2*i)+1);
}
i++;
}
cout<<4*(1+ans)<<endl;
}
