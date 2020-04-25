#include <stdio.h>
void function(int a,int b,int *sum,int *diff,int *times)
{
	*sum = a + b;
	*diff = a - b;
	*times = a * b;
} 

int main(){
	int sum,diff,times;
	function(1,5,&sum,&diff,&times);
	printf("%d,%d,%d\n",sum,diff,times); 
	return 0;
		}
		
//6,-4,5
//--------------------------------
//Process exited after 0.04368 seconds with return value 0
//请按任意键继续. . .
