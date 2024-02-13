#include  <stdio.h>
int main(){

  int SelectLanguage , Selectrechargepack;
  printf("press 1 for English\npress 2 for hindi\npress 3 for gujarati\n");

  printf("\nplease Select the Language:");

  scanf("%d",&SelectLanguage);

  switch(SelectLanguage){

    case 1:
      printf("\n(english)\n");

      printf("\nPress 1 for Internet Recharge\nPress 2 for Top-up Recharge\nPress 3 for Special Recharge\n");
      break;

    case 2:
      printf("\n(hindi)\n");

      printf("Internet Recharge ke liye 1 dabaiye\nTop-up Recharge ke liye 2 dabaiye\nSpecial Recharge ke liye 3 dabaiye\n");
      break;

    case 3:
      printf("\n(gujarati)\n");

      printf("Internet Recharge mate 1 dabavo \nTop-up Recharge mate 2 dabavo\nSpecial Recharge mate 3 dabavo\n");
      break;

    default:
     printf("\n(no language is selected)\n");
     break;
  }

  printf("\n please select the recharge pack:");

  scanf("%d",&Selectrechargepack);

  switch(Selectrechargepack){

    case 1:
      printf("\n(you have select the internet recharge pack)");
      break;

    case 2:
      printf("\n(you have select the top up pack)");
      break;

    case 3:
      printf("\n(you have select the special pack)");
      break;

    default:
     printf("(no package is selected)");
     break;
  }


  return 0;
}