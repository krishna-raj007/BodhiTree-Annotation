#include<simplecpp>

main_program{
    int n, i=0;
    cin>> n;
    float s=0;
    while(i<=n){
        if(i%2==0) s=s + 1.0/(2*i+1); //even i
        else s= s - 1.0/(2*i+1); // odd i
        i++;
    }
    float answer= s*4;
    cout<< answer << endl;

}
