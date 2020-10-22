#include<simplecpp>

main_program{

int n,count=0;
cin>>n;

repeat(n){
int a;
cin>>a;
if (a%2==0)
count =count+1;
 if (a%3==0)
count =count+1;
 if (a%5==0)
count =count+1;
 if (a%7==0)
count =count+1;
 if (a%11==0)
count =count+1;

cout<<count;
count=0;

}


}
