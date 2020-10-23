#include<simplecpp>
#include<math.h>
main_program
{
    int n;
    cin>>n;
    if(n>=2&&n<=100)
    {
        int a[n],s[n-1];
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            if(t>=1&&t<=pow(10,17))
            {
                a[i]=t;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            s[i]=a[i]+a[i+1];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(s[j]>s[j+1])
                {
                    int t=s[j];
                    s[j]=s[j+1];
                    s[j+1]=t;
                }
            }
        }
        cout<<s[n-1];
    }
}
