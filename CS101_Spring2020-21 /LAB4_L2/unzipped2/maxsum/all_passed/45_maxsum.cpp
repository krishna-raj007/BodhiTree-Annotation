#include<simplecpp>

main_program{

int n;
cin>>n;
int current;
int before =0;
int answer=0;
repeat(n){
cin>>current;
answer=max(answer,current+before);
before=current;
}
cout<<answer;

}
