#include<stdio.h>
#include<conio.h>
main()
{
	int choice,sel;
	clrscr();
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujrati\n");
	printf("Enter your Choice:");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			printf("press 1 for Internet Recharge\n");
			printf("press 2 for Top-up Recharge\n");
			printf("Press 3 for special Recharge\n");
			printf("enter your chice\n");
			scanf("%d",&sel);


			switch(sel)
			{
				case 1:
					printf("you have successfully done internet recharge");
					break;
				case 2:
					printf("You have successfully done Top-up recharge");
					break;
				case 3:
					printf("you have successfully done special recharge");
					break;
				default:
					printf("Invalid Recharge");
			}
			break;
		case 2:
			printf("\nInternet Recharge ke liye 1 dabaiye\n");
			printf("Top-up Recharge ke liye 2 dabaiye\n");
			printf("special Recharge ke liye 3 dabaiye\n");
			printf("enter your chice\n");
			scanf("%d",&sel);

	switch(sel)
	{
		case 1:
			printf("Apne safaltapurvak internet recharge kar liya he");
			break;
		case 2:
			printf("Apne safaltapurvak Top-up recharge kar liya he");
			break;
		case 3:
			printf("Apne safaltapurvak Specail recharge kar liya he");
			break;
		default:
			printf("Invalid Recharge");

	}
	break;
		case 3:
			printf("Internet Recharge mate 1 dabaiye\n");
			printf("Top-up Recharge mate 2 dabaiye\n");
			printf("special Recharge mate 3 dabaiye\n");
			printf("enter your chice\n");
			scanf("%d",&sel);

	switch(sel)
	{
		case 1:
			printf("tame safaltapurvak internet recharge kariyu che");
			break;
		case 2:
			printf("Apne safaltapurvak Top-up recharge kariyu che");
			break;
		case 3:
			printf("Apne safaltapurvak Specail recharge kariyu che");
			break;
		default:
			printf("Invalid Recharge");

	}
	break;

      }
      getch();
}


