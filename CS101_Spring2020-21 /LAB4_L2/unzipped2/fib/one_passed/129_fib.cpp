#include<simplecpp>

main_program{
 long long int n , x=0 , y=1 , i=0 , counts , sum=0  ;
cin>>n;
while(true){
  if(n==0 || n==1){
    cout<<"1"; break;

  }
sum=x+y ;
x=y;
y=sum;
counts=2+i;
i++;
if(n==sum){

 cout<<counts ;
 break;}
if(sum>n) {
        cout<<"-1";
        break ;
}


}
	//Write your code here

}
