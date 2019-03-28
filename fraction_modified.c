#include <stdio.h>
#include <stdlib.h>

typedef struct fract
	{
		int num;
		int deno;
	}fraction;

int gcd(int,int);
fraction fractfun(fraction,fraction);

int main()
{
	fraction fraction1;
	fraction fraction2;
	fraction result;
	int simplify;
	printf("first fraction:\n");
	scanf("%d %d",&fraction1.num,&fraction1.deno);
	printf("second fraction\n");
	scanf("%d %d",&fraction2.num,&fraction2.deno);
    result=fractfun(fraction1,fraction2);
    simplify=gcd(result.num,result.deno);
    printf("%d/%d",(result.num)/simplify,(result.deno)/simplify);
	return 0;
}

fraction fractfun(fraction fraction1,fraction fraction2){
   int num,deno;
   deno=fraction1.deno * fraction2.deno;
   num=fraction1.num * fraction2.deno + fraction2.num * fraction1.deno;

   fraction fractresult;

   fractresult.num=num;
   fractresult.deno=deno;

  return(fractresult);}


int gcd(int num1,int num2){
int total;
for(int i=1;i<=num1 && i<=num2;i++)
	if(num1 % i == 0 && num2 % i==0)
		total=i;

return total;}
