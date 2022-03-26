#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int numberOfPeople;
   char foodList[10][50]={"Pizza", "Burger", "Lahmacun",
    "Ciger","Soup", "Kebap", "Fried Chicken", "Mantı",
    "Tantuni", "Fish"};
   int pick[10]={0};
   int choice;
   printf("Number of people: ");
   scanf("%d", &numberOfPeople);
   
   int i;
   int point;
   for(i=0; i<numberOfPeople;i++){
       printf("Make 5 choices: \n" );
        for(int j=0;j<10;j++){
            printf("%d) %s \n",j+1,foodList[j]);
        }
            for(int j=0; j<5;j++){
                scanf("%d", &choice);
                pick[choice-1]+=5-j;
                point = (rand()%16);
                printf("%d: %d\n", choice,point);
        }
 
   } 
   
   char short_list[8][50];
   int count=0;
   int threshold = 7;
   for(int i=0;i<10;i++){
    if(pick[i]>=threshold){
        strcpy(short_list[count],foodList[i]);
        count++;
        }
    }
    if(count==0){
        printf("You are eating at home/dorm today!");
        return 0;
        }
        printf("Short list is:\n");
        for(int i=0;i<count;i++)
        {
        printf("%d) %s \n",i+1,short_list[i]);
        } 
    printf("Rate the foods above the list 0 to 10: ");
    int pick2[5]={0};
        for(int j=0;j<numberOfPeople;j++){
            printf("%d: \n",j+1);
            for(int i=0; i<count;i++){
                scanf("%d", &choice);
                pick2[choice-1]+=count-i;
        }
        }
    int max=0;
    for(int i=0;i<count;i++){
        if(pick2[max]<pick2[i]){
            max=i;
        }
    }
    printf("%s is ordered.",short_list[max]);
    
    return 0;
}
