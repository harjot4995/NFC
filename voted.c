#include<stdio.h>

int main()
{
long long int t,n,i,j,c[50],sum=0,k=0;
 scanf("%lld",&t);
for(k=0;k<t;++k)
{sum=0;
  scanf("%lld",&n);
  for(i=1;i<=n;++i)
     {
       scanf("%lld",&c[i]);
     }

   for(i=1;i<=n;++i)
      {
             sum+=c[i];
       if(c[i]==n){printf("-1");break;}
          else if(sum>n){ printf("-1");break;}
else{
    for(j=n;j>0;--j)
        {
         if(i==j){continue;}
             else if(c[j]==0){continue;}
             else {c[j]=c[j]-1; printf("%lld ",j); break;}
         }

    }

}
printf("\n");

}

return 0;
}
