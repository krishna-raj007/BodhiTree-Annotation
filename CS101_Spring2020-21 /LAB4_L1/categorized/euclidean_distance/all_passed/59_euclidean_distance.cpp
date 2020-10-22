#include<simplecpp>

main_program{
int N,n;
float a,b,diff,sum = 0;
cin >> N;
repeat (N){
    sum=0;
cin >> n;
repeat (n){
cin >> a >> b;
diff = a-b;
sum = sum + (diff*diff);
}
printf("%.2f\n",sqrt(sum));
}

}
