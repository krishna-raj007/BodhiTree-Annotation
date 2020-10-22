#include<simplecpp>

main_program{
    int n;
    cin>>n;
    for(int j=1;j<=n;j++){
int a,b=0,i;
cin>>a;
for(i=2;i<=11;i++){
 switch(i){
 case 2:if(a%2==0)
        b++;
        break;
 case 3:if(a%3==0)
        b++;
        break;
 case 5:if(a%5==0)
        b++;
        break;
 case 7:if(a%7==0)
        b++;
        break;
 case 11:if(a%11==0)
        b++;
        break;

 }

}
  cout<<b<<endl;
}
}
