#include "stdio.h"
#include "string.h"
struct Database
{
	int medicineID, medicineCount, medcineExpDate;
  	char medicineName[25], medicineCompany[25], supplyMode[25], supplyType[25];
}temp;
int main()
{
  	struct Database object[30];
  	int i, j, k, l, m, date;
	char Name[10];
	printf("Enter today's date to get started: ");
	scanf("%d", &date);
	printf("\nWelcome to Chemist Management System.\n");
	for (i=0; i<30; i++)
	{
		printf("\nMedicine #%d\n", i+1);
    		printf("Enter medicine ID: ");
	   	scanf(" %d", &object[i].medicineID );
	    	printf("Enter medicine name: ");
	    	scanf(" %\n[^\n]%*c", &object[i].medicineName );
    		printf("Enter medicine company: ");
	    	scanf(" %\n[^\n]%*c", &object[i].medicineCompany );
	    	printf("Enter medicine expiry date: ");
	    	scanf(" %d", &object[i].medcineExpDate );
	    	printf("Enter medicine count: ");
	    	scanf(" %d", &object[i].medicineCount);
	    	printf("Enter supply mode(Mini truck/Delivery boy): ");
	    	scanf(" %\n[^\n]%*c", &object[i].supplyMode );
	    	printf("Enter supply type(Carton/Strips/Loose): ");
	    	scanf(" %\n[^\n]%*c", &object[i].supplyType );
	}
  	for (j=0; j<30; j++)
  	{
    		printf("\nEnter your name: ");
    		scanf(" %[^\n]%*c", &Name);
    		if (strcmp(Name,"Shreyansh") == 0)
    		{
      			printf("\nPart I\n");
      			for (k=0; k<30; k++)
		      	{
				if (strncmp(object[k].medicineName,"P",1) == 0)
				{
			  		printf("\nMedicine ID: %d\n", object[k].medicineID);
			  		printf("Medicine Name: %s\n", object[k].medicineName);
			  		printf("Medicine Company: %s\n", object[k].medicineCompany);
					printf("Medicine Expiry Date: %d\n", object[k].medcineExpDate);
					printf("Medicine Count: %d\n", object[k].medicineCount);
					printf("Medicine Supply Mode: %s\n", object[k].supplyMode);
					printf("Medicine Supply Type: %s\n", object[k].supplyType);
				}
		      }
		      printf("\nPart II\n");
		      for (k=0; k<30; k++)
		      {
				if (object[k].medcineExpDate - date <= 7)
				{
			  		printf("\nMedicine ID: %d\n", object[k].medicineID);
			  		printf("Medicine Name: %s\n", object[k].medicineName);
			  		printf("Medicine Company: %s\n", object[k].medicineCompany);
			  		printf("Medicine Expiry Date: %d\n", object[k].medcineExpDate);
			  		printf("Medicine Count: %d\n", object[k].medicineCount);
			  		printf("Medicine Supply Mode: %s\n", object[k].supplyMode);
			  		printf("Medicine Supply Type: %s\n", object[k].supplyType);
				}
		      }
		      printf("\nPart III\n");
		      for (k=0; k<30; k++)
		      {
				if (object[k].medicineCount < 10)
				{
			  		printf("\nMedicine ID: %d\n", object[k].medicineID);
			  		printf("Medicine Name: %s\n", object[k].medicineName);
			  		printf("Medicine Company: %s\n", object[k].medicineCompany);
			  		printf("Medicine Expiry Date: %d\n", object[k].medcineExpDate);
			  		printf("Medicine Count: %d\n", object[k].medicineCount);
			  		printf("Medicine Supply Mode: %s\n", object[k].supplyMode);
			  		printf("Medicine Supply Type: %s\n", object[k].supplyType);
				}
		      }
		}
	    	if (strcmp(Name,"Dhruvin") == 0)
	    	{
	      		printf("\nPart I\n");
	      		for (l=0; l<30; l++)
	      		{
				for (m=l+1; m<30; m++)
				{
		  			if (strcmp(object[l].medicineCompany,object[m].medicineCompany) > 0)
		  			{
					    	temp = object[l];
					    	object[l] = object[m];
					    	object[m] = temp;
		  			}
				}
	      		}
	      		for (k=0; k<30; k++)
	      		{
				printf("\nMedicine ID: %d\n", object[k].medicineID);
				printf("Medicine Name: %s\n", object[k].medicineName);
				printf("Medicine Company: %s\n", object[k].medicineCompany);
				printf("Medicine Expiry Date: %d\n", object[k].medcineExpDate);
				printf("Medicine Count: %d\n", object[k].medicineCount);
				printf("Medicine Supply Mode: %s\n", object[k].supplyMode);
				printf("Medicine Supply Type: %s\n", object[k].supplyType);
		      	}
		      	printf("\nPart II\n");
		      	for (k=0; k<30; k++)
		      	{
				if (strcmp(object[k].medicineCompany,"Ranbaxy") == 0)
				{
		  			printf("\nMedicine ID: %d\n", object[k].medicineID);
		  			printf("Medicine Name: %s\n", object[k].medicineName);
		  			printf("Medicine Company: %s\n", object[k].medicineCompany);
		  			printf("Medicine Expiry Date: %d\n", object[k].medcineExpDate);
		  			printf("Medicine Count: %d\n", object[k].medicineCount);
		  			printf("Medicine Supply Mode: %s\n", object[k].supplyMode);
		  			printf("Medicine Supply Type: %s\n", object[k].supplyType);
				}
	      		}
	      		printf("\nPart III\n");
	      		for (k=0; k<30; k++)
			{
		  		if (strcmp(object[k].supplyMode,"Mini truck") == 0)
		  		{
		    			printf("\nMedicine ID: %d\n", object[k].medicineID);
		    			printf("Medicine Name: %s\n", object[k].medicineName);
		    			printf("Medicine Company: %s\n", object[k].medicineCompany);
		    			printf("Medicine Expiry Date: %d\n", object[k].medcineExpDate);
		    			printf("Medicine Count: %d\n", object[k].medicineCount);
		    			printf("Medicine Supply Mode: %s\n", object[k].supplyMode);
		    			printf("Medicine Supply Type: %s\n", object[k].supplyType);
		  		}
			}
	      	}
	    	if (strcmp(Name,"Shrey") == 0)
	    	{
	      		printf("\nPart I\n");
	      		for (l=0; l<30; l++)
	      		{
				for (m=l+1; m<30; m++)
				{
		  			if (strcmp(object[l].supplyType,object[m].supplyType) > 0)
		  			{
		    				temp = object[l];
		    				object[l] = object[m];
		    				object[m] = temp;
		  			}
				}
	      		}
	      		for (k=0; k<30; k++)
	      		{
				printf("\nMedicine ID: %d\n", object[k].medicineID);
				printf("Medicine Name: %s\n", object[k].medicineName);
				printf("Medicine Company: %s\n", object[k].medicineCompany);
				printf("Medicine Expiry Date: %d\n", object[k].medcineExpDate);
				printf("Medicine Count: %d\n", object[k].medicineCount);
				printf("Medicine Supply Mode: %s\n", object[k].supplyMode);
				printf("Medicine Supply Type: %s\n", object[k].supplyType);
	      		}
	      		printf("\nPart II\n");
	      		for (k=0; k<300; k++)
	      		{
				if (strcmp(object[k].supplyMode,"Delivery boy") == 0)
				{
		  			printf("\nMedicine ID: %d\n", object[k].medicineID);
		  			printf("Medicine Name: %s\n", object[k].medicineName);
		  			printf("Medicine Company: %s\n", object[k].medicineCompany);
		  			printf("Medicine Expiry Date: %d\n", object[k].medcineExpDate);
		  			printf("Medicine Count: %d\n", object[k].medicineCount);
		  			printf("Medicine Supply Mode: %s\n", object[k].supplyMode);
		  			printf("Medicine Supply Type: %s\n", object[k].supplyType);
				}
	      		}
		}
	}
  	printf("\nThank you for using Chemist Management System.\n");
}
