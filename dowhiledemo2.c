#include<stdio.h>
int main()
{
	int option,num1,num2,num3,result;
	char choise;
	do
	{
		printf("1. Addition\n2. subtraction\n3. Multiplication\n4. division\n5. modulous\n");
		printf("Enter number(1 to 5)\n");
		scanf("%d",&option);
		printf("enter any two numbers\n");
		scanf("%d%d",&num1,&num2);
		
		switch(option)
		{
			case 1:
				    result=num1+num2;
				    printf("sum=%d\n",&result);
				    break;
			case 2:
				    result=num1-num2;
				    printf("diff=%d\n",&result);
				    break;
			case 3:
				    result=num1*num2;
				    printf("product=%d\n",&result);
				    break;
			case 4:
				if(num2!=0)
				{
				    result=num1/num2;
				    printf("division=%d\n",&result);
				    break;
			    }
				else
					printf("division is not possible");
					break;	
			case 5:
				if(num2!=0)
				{
				    result=num1%num2;
				    printf("mod=%d\n",&result);
				    break;
			    }
			    else
			    printf("mod is not possible");
			    break;
		}
		fflush(stdin);
		printf("do you want to continue...(y/n)?\n");
		scanf("%c",&choise);
	}while(choise=='y' || choise=='y');
	printf("Thank you for using my simple calculator\n");
	return 0;
}