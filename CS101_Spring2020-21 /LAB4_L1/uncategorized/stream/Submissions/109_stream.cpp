#include<simplecpp>

main_program{
int a ,b=-1;
while (a>0){
 cin>>a;
 if (a>b) b=a;
 if (a==-1)break;
}
cout<<b<<endl;

}
