#include<simplecpp>
main_program{
int n,i{1};
double solution{1};
cin>>n;
repeat(n){
if(1%2==0){
solution +=1.0/((2*i)+1);
}
else{
solution -=1.0/((2*i)+1);
}
i++;
}
solution*=4;
cout<<solution;
}
