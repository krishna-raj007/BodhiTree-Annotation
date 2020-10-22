#include<simplecpp>
main_program{
int input,maxim;
maxim = 0;
while(input != -1){

    cin>>input;
    if(input > maxim){
        maxim = input;
    }
}
cout<<maxim;



}
