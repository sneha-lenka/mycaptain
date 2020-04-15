#include<stdio.h>
int main()
{
	printf("welcome to restro! here's the menu.. \n1.pizza,rs239 \n2.burger,rs129 \n3.pasta,rs179 \n4.french-fries,rs99 \n5.sandwich,rs149 \n");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("you've chosen \n food item-pizza \n price-rs 239");
		        break;
		case 2:printf("you've chosen \n food item-burger \n price-rs 129");
		        break;
		case 3:printf("you've chosen \n food item-pasta \n price-rs 179");
		        break;
		case 4:printf("you've chosen \n food item-french fries \n price-rs 99");
		        break;
		case 5:printf("you've chosen \n food item-sandwich \n price-rs 149");
		        break;
		default: printf("sorry, unavailable option chosen");
	}
	return 0;
}
