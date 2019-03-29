#include <stdio.h>
#include <stdlib.h>
typedef struct fract
	{
		int num;
		int deno;
	}fraction;

int gcd(int,int);
fraction fractfun(fraction* fr, int n);

fraction input(fraction *fractInput, int size){
int i;
for(i=0;i<size;i++)
scanf("%d %d",&fractInput[i].num,&fractInput[i].deno); 
}

fraction fractfun(fraction *fractInput, int n){
    int num=0,deno=1;
	int i;
	for(i=0;i<n;i++)
   	deno *= fractInput[i].deno;
   	for(i=0;i<n;i++)
   	num += fractInput[i].num * (deno/(fractInput[i].deno));
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

int main()
{
	fraction result,*frac;
	int size;
	int simplify;
        scanf("%d",&size);
        frac=malloc(size*sizeof(fraction));
        input(frac,size);
    	result=fractfun(frac,size);
    	simplify=gcd(result.num,result.deno);
    	printf("%d/%d",(result.num)/simplify,(result.deno)/simplify);
	return 0;
}
