#include <stdio.h>
#include <stdlib.h>
void main()
{
 	int i,array[100],*ptr;
	ptr=array;
	for(i=0;i<100;i++)
	{
		array[i]=rand();
		printf("array index-%d content using index-%d  using pointer-%d  \n",i,array[i],*ptr);
		ptr++;

	}
	ptr=array;
	for(i=0;i<100;i++)
	{	
		*ptr += 5;
		printf("array index-%d content using index-%d  using pointer-%d  \n",i,array[i],*ptr);
		ptr++;
				
	}
}

