#include <stdio.h>
#include <stdlib.h>

typedef struct fract
	{
		int num;
		int deno;
	}fraction;

int lcm(int,int);
fraction fractfun(fraction,fraction);


int main()
{
	fraction fraction1;
	fraction fraction2;
	fraction result;
	printf("first fraction:\n");
	scanf("%d %d",&fraction1.num,&fraction1.deno);
	printf("second fraction\n");
	scanf("%d %d",&fraction2.num,&fraction2.deno);
    result=fractfun(fraction1,fraction2);
    printf("%d/%d",result.num,result.deno);
	return 0;
}

fraction fractfun(fraction fraction1,fraction fraction2){
   int num,deno;
   deno=lcm(fraction1.deno,fraction2.deno);
   num=fraction1.num * (deno/fraction1.deno) + fraction2.num * (deno/fraction2.deno);

   fraction fractresult;

   fractresult.num=num;
   fractresult.deno=deno;

  return(fractresult);}

int lcm(int num1,int num2){
int minmultiple;
minmultiple = (num1>num2) ? num1:num2;
while(1){
if(minmultiple%num1==0 && minmultiple%num2==0){
return minmultiple;
}
minmultiple++;
}
return minmultiple++;}
