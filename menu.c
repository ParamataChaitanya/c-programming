#include<stdio.h>
int main()
{
	int quantity,cost,price,n,Bill=0;
	char choise;
	do
	{
	printf("1.Bruschetta=$8\n2.Calamari Fritti=$12\n3.Stuffed Mushrooms=$10\n4.Caesar Salad=$9\n5.Greek Salad=$11\n6.Caprese Salad=$11\n");
	printf("enter nuber(1 to 6)\n");
	scanf("%d",&n);
	printf("enter quantity=");
	scanf("%d",&quantity);
	switch(n)
		{
			case 1:
				    cost=8*quantity;
				    printf("Bruschetta=8\n");
				    printf("total=%d\n",&cost);
				    break;
			case 2:
				    price=12;
				    cost=price*quantity;
				    printf("Calamari Fritti=12\n");
				    printf("total=%d\n",cost);
				    break;
			case 3:
				    price=10;
				    cost=price*quantity;
				    printf("Stuffed Mushrooms=$10");
				    printf("total=%d/n",cost);
				    break;
			case 4:
				    price=9;
				    cost=price*quantity;
				    printf("Caesar Salad=$9\n");
				    printf("total=%d\n",cost);
				    break;
			case 5:
				    price=11;
				    cost=price*quantity;
				    printf("Greek Salad=$11\n");
				    printf("total=%d\n",cost);
				    break;
			case 6:
				    price=11;
			        cost=price*quantity;
				    printf("Caprese Salad=$11\n");
				    printf("total=%d\n",cost);
				    break;
			default:
			       printf("enter valid\n"); 
			       break;
		}
		fflush(stdin);
		printf("do you want to continue...(y/n)?\n");
		scanf("%c",&choise);
		Bill=Bill+cost;
	}
	while(choise=='y' || choise=='Y');
	printf("Thank you for comming\n");
	return 0;
}
