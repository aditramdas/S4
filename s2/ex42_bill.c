/*Bill
Name : Adith Ramdas
Class : S2CS2
Date : 21/07/2022*/
#include <stdio.h>

int main(void)
{
	char name[30];
	int i, j, sno, unitprice, quantity, price, total, itemno_bought[100], quantity_bought[100], n;
	long itemco;
	FILE *fp = fopen("STOCK.DAT" , "r+");
	printf("Enter the number of items: \n");
	scanf(" %d" , &n);
	for(i = 0 ; i < n ; i++){
		printf("Enter the item number and quantity\n");
		scanf("%d %d", &itemno_bought[i] , &quantity_bought[i]);
	}
	printf("\n************************************\n");
	printf("SL.No\tItem Code\tItem Name\t\tUnit Price\tQuantity\tPrice");
	printf("\n\n");
	
	for(i = 0 ; i< n ; i++){
		
		
		while((fscanf(fp , "%5ld%30c%4d%4d", &itemco, name , &unitprice, &quantity)) != EOF)
		{
			
			if(itemco == itemno_bought[i]){
				printf("%d\t", i+1);
				printf("%ld\t\t", itemco);
				printf("%s", name);
				printf("%d\t\t", unitprice);
				printf("%d\t\t", quantity_bought[i]);
				printf("%d", quantity_bought[i] * unitprice);

				// fseek(fp , -4 , 1);
				// fprintf(fp, "%-4d", quantity - quantity_bought[i]);
				printf("\n");
				break;
				fseek(fp , 0 , 0);
				
			}
			

		}
	}


}