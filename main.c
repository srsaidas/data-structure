#include <stdio.h>
#include "stack.h"
int main()
{
		int opt;
		int data;
		while(1)
		{
				printf("Enter your option: \n");

				printf("Enter your option: \n1. Push\n 2. Pop \n3. Traverse \n4. Exit :");

				scanf("%d", &opt);
				switch(opt)
				{
						case 1://Push
								printf("Enter the data: ");
								scanf("%d", &data);
								push(data);
								break;
						case 2://pop
								printf("Poped Data %d", pop());
								break;
						case 3: //traverse
								traverse();
								break;
						default://exit
								return 0;
								break;

				}
		}
}
