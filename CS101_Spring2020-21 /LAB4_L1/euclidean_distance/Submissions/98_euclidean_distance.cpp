#include<simplecpp>

main_program{

	int q,n;
	float f,a,b,s,r;
	cin>>q;
	for(int i=q;i>0;i--){

	cin>>n;
	r=0;

        for(int j=n;j>0;j--){
            cin>>a>>b;
            s=((a-b)*(a-b));
            r=r+s;
        }
        f=sqrt(r);
        printf("%.2f\n",f);

	}


}
