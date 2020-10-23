#include<simplecpp>
main_program{
float no1,no2;
char cal;
int Z;
cin>> Z;
repeat(Z){

cin>> no1>>cal>>no2;\
switch(cal){
 case'+' : cout<< no1+no2<<endl;break;
 case'-' : cout<< no1-no2<<endl;break;
 case'*' : cout<<no1*no2<<endl;break;
 case'/' : cout<<no1/no2<<endl;
 break;
 default: cout<<-1<<endl;


}
}
}
