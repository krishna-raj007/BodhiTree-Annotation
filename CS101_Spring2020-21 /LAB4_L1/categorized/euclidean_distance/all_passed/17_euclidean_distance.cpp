#include<simplecpp>

main_program{
int q;
cin>>q;
repeat(q){
int n;
float answer{0};
cin>>n;
repeat(n){
float a,b;
cin>>a>>b;
answer+=((a-b)*(a-b));
}
answer=sqrt(answer);
printf("%.2f\n",answer);
}

	//Write your code here

}
