#include<simplecpp>

main_program{
float Q,N,a_1,a_2;
float ans;
cin>>Q;
repeat(Q){
cin>>N;
float main_ans=0;
repeat(N){
cin>>a_1>>a_2;
ans=(a_1-a_2)*(a_1-a_2);
main_ans=main_ans+ans;
}
printf("%.2f\n",sqrt(main_ans));
}

}
