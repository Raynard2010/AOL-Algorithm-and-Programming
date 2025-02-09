#include <stdio.h>
#include <string.h>

struct datas{
	char location[101];
	char city[101];
	int price;
	int rooms;
	int bathroom;
	int carpark;
	char type[101];
	char furnish[101];
};

void swap(struct datas *a, struct datas *b){
	struct datas temp = *a;
	*a = *b;
	*b = temp;
} 

// Fuction Display
void display(struct datas data[], int max){
	int nrow;
	
	printf("Number of rows: ");
	scanf("%d", &nrow);
	
	while(nrow <= 0){
		printf("Enter a positive integer!\n");
		printf("Number of rows: ");
		scanf("%d", &nrow);	
	}
	
	printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");

	for(int i = 0; i < nrow && i < max; i++){
		printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
	}
}

// Function SelectRow
void selectRow(struct datas data[], int idx){
	char column[101];
	char searchFor[101];
	int searchForInt;
	
	bool found = false;
	
	printf("Choose column: ");
	scanf("%s", &column);
	
	while(strcmp(column, "Location") != 0 && strcmp(column, "City") != 0 && strcmp(column, "Price") != 0 && strcmp(column, "Rooms") != 0 && strcmp(column, "Bathroom") != 0 && strcmp(column, "Carpark") != 0 && strcmp(column, "Type") != 0 && strcmp(column, "Furnish") != 0){
		printf("Enter a valid column!\n");
		printf("Choose column: ");
		scanf("%s", &column);
	}
	
	printf("What data do you want to find? ");
	
	if(strcmp(column, "Location") == 0){
		scanf("%s", &searchFor);
		
		for(int i = 0; i < idx; i++){
			if(strcmp(searchFor, data[i].location) == 0){
				found = true;
				break;
			}
		}
		
		if(found){
			printf("Data found. Detail of data:\n");
			
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");

			for(int i = 0; i < idx; i++){
				if(strcmp(searchFor, data[i].location) == 0){
					printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
				}
			}
		}
		else{
			printf("Data not found!\n");
		}
		
	}
	else if(strcmp(column, "City") == 0){
		scanf("%s", &searchFor);
		
		for(int i = 0; i < idx; i++){
			if(strcmp(searchFor, data[i].city) == 0){
				found = true;
				break;
			}
		}
		
		if(found){
			printf("Data found. Detail of data:\n");
			
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");

			for(int i = 0; i < idx; i++){
				if(strcmp(searchFor, data[i].city) == 0){
					printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
				}
			}
		}
		else{
			printf("Data not found!\n");
		}
		
	}
	else if(strcmp(column, "Price") == 0){
		scanf("%d", &searchForInt);
		
		for(int i = 0; i < idx; i++){
			if(searchForInt == data[i].price){
				found = true;
				break;
			}
		}
		
		if(found){
			printf("Data found. Detail of data:\n");
			
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");

			for(int i = 0; i < idx; i++){
				if(searchForInt == data[i].price){
					printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
				}
			}
		}
		else{
			printf("Data not found!\n");
		}
				
	}
	else if(strcmp(column, "Rooms") == 0){
		scanf("%d", &searchForInt);
		
		for(int i = 0; i < idx; i++){
			if(searchForInt == data[i].rooms){
				found = true;
				break;
			}
		}
		
		if(found){
			printf("Data found. Detail of data:\n");
			
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");

			for(int i = 0; i < idx; i++){
				if(searchForInt == data[i].rooms){
					printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
				}
			}
		}
		else{
			printf("Data not found!\n");
		}
			
	}
	else if(strcmp(column, "Bathroom") == 0){
		scanf("%d", &searchForInt);
		
		for(int i = 0; i < idx; i++){
			if(searchForInt == data[i].bathroom){
				found = true;
				break;
			}
		}
		
		if(found){
			printf("Data found. Detail of data:\n");
			
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");

			for(int i = 0; i < idx; i++){
				if(searchForInt == data[i].bathroom){
					printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
				}
			}
		}
		else{
			printf("Data not found!\n");
		}
				
	}
	else if(strcmp(column, "Carpark") == 0){
		scanf("%d", &searchForInt);
	
		for(int i = 0; i < idx; i++){
			if(searchForInt == data[i].carpark){
				found = true;
				break;
			}
		}
		
		if(found){
			printf("Data found. Detail of data:\n");
			
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");

			for(int i = 0; i < idx; i++){
				if(searchForInt == data[i].carpark){
					printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
				}
			}
		}
		else{
			printf("Data not found!\n");
		}
		
	}
	else if(strcmp(column, "Type") == 0){
		scanf("%s", &searchFor);
		
		for(int i = 0; i < idx; i++){
			if(strcmp(searchFor, data[i].type) == 0){
				found = true;
				break;
			}
		}
		
		if(found){
			printf("Data found. Detail of data:\n");
			
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");

			for(int i = 0; i < idx; i++){
				if(strcmp(searchFor, data[i].type) == 0){
					printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
				}
			}
		}
		else{
			printf("Data not found!\n");
		}

	}
	else{
		scanf("%s", &searchFor);

		for(int i = 0; i < idx; i++){
			if(strcmp(searchFor, data[i].furnish) == 0){
				found = true;
				break;
			}
		}
		
		if(found){
			printf("Data found. Detail of data:\n");
			
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");

			for(int i = 0; i < idx; i++){
				if(strcmp(searchFor, data[i].furnish) == 0){
					printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
				}
			}
		}
		else{
			printf("Data not found!\n");
		}
		
	}
}

// Function SortBy
void sortBy(struct datas data[], int idx){
	char column[101];
	char sortType[101];
	
	printf("Choose column: ");
	scanf("%s", &column);
	
	while(strcmp(column, "Location") != 0 && strcmp(column, "City") != 0 && strcmp(column, "Price") != 0 && strcmp(column, "Rooms") != 0 && strcmp(column, "Bathroom") != 0 && strcmp(column, "Carpark") != 0 && strcmp(column, "Type") != 0 && strcmp(column, "Furnish") != 0){
		printf("Enter a valid column!\n");
		printf("Choose column: ");
		scanf("%s", &column);
	}
	
	printf("Sort ascending or descending? ");
	scanf("%s", &sortType);
	
	while(strcmp(sortType, "asc") != 0 && strcmp(sortType, "des") != 0){
		printf("Enter a valid command! \"asc\" for ascending, \"des\" for desending\n");
		printf("Sort ascending or descending? ");
		scanf("%s", &sortType);
	}
	
	if(strcmp(sortType, "asc") == 0){
		if(strcmp(column, "Location") == 0){			
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(strcmp(data[j].location, data[j + 1].location) > 0){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}
		}
		else if(strcmp(column, "City") == 0){
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(strcmp(data[j].city, data[j + 1].city) > 0){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}
		}
		else if(strcmp(column, "Price") == 0){
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(data[j].price > data[j + 1].price){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}		
		}
		else if(strcmp(column, "Rooms") == 0){
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(data[j].rooms > data[j + 1].rooms){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}		
		}
		else if(strcmp(column, "Bathroom") == 0){
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(data[j].bathroom > data[j + 1].bathroom){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}			
		}
		else if(strcmp(column, "Carpark") == 0){
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(data[j].carpark > data[j + 1].carpark){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}	
		}
		else if(strcmp(column, "Type") == 0){
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(strcmp(data[j].type, data[j + 1].type) > 0){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}
		}
		else{
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(strcmp(data[j].furnish, data[j + 1].furnish) > 0){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}
		}	
	}
	else{
		if(strcmp(column, "Location") == 0){			
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(strcmp(data[j].location, data[j + 1].location) < 0){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}
		}
		else if(strcmp(column, "City") == 0){
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(strcmp(data[j].city, data[j + 1].city) < 0){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}
		}
		else if(strcmp(column, "Price") == 0){
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(data[j].price < data[j + 1].price){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}		
		}
		else if(strcmp(column, "Rooms") == 0){
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(data[j].rooms < data[j + 1].rooms){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}		
		}
		else if(strcmp(column, "Bathroom") == 0){
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(data[j].bathroom < data[j + 1].bathroom){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}			
		}
		else if(strcmp(column, "Carpark") == 0){
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(data[j].carpark < data[j + 1].carpark){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}	
		}
		else if(strcmp(column, "Type") == 0){
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(strcmp(data[j].type, data[j + 1].type) < 0){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}
		}
		else{
			for(int i = 0; i < idx; i++){
				for(int j = 0; j < idx - 1 - i; j++){
					if(strcmp(data[j].furnish, data[j + 1].furnish) < 0){
						swap(&data[j], &data[j + 1]);
					}
				}
			}
					
			printf("Data found. Detail of data:\n");
			printf("Location\t\t   City\t\t    Price\tRooms\tBathroom\tCarpark\t  Type\t       Furnish\n");
	
			for(int i = 0; i < 10; i++){
				printf("%-27s%s     %-11d %d\t%d\t\t%d\t  %-12s %s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);
			}
		}			
	}
}

// Function Export
void exportFunction(struct datas data[], int idx){
	char fileName[101];
	
	printf("File name: ");
	getchar();
	scanf("%[^\n]", &fileName);
	
	strcat(fileName, ".csv");
		
	FILE *newFile;

	newFile = fopen(fileName, "w");
	
	fprintf(newFile, "Location 1,Location 2,Price,Rooms,Bathrooms,CarParks,Type,Furnish\n");	
	
	for(int i = 0; i < idx; i++){
		fprintf(newFile, "%s,%s,%d,%d,%d,%d,%s,%s\n", data[i].location, data[i].city, data[i].price, data[i].rooms, data[i].bathroom, data[i].carpark, data[i].type, data[i].furnish);		
	}

	printf("Data successfully written to file %s\n", fileName);
}

int main(){
	struct datas data[4500];
	
	int choice;
	
	FILE *fptr;
	
	fptr = fopen("file.csv", "r");
	
	fscanf(fptr, "Location 1,Location 2,Price,Rooms,Bathrooms,CarParks,Type,Furnish\n");
	
	int idx = 0;
	
	while(!feof(fptr)){
		fscanf(fptr, "%[^,],%[^,],%d,%d,%d,%d,%[^,],%[^\n]\n", &data[idx].location, &data[idx].city, &data[idx].price, &data[idx].rooms, &data[idx].bathroom, &data[idx].carpark, &data[idx].type, &data[idx].furnish);
		idx++;
	}
	
	printf("What do you want to do?\n");
	printf("1. Display Data\n");
	printf("2. Search Data\n");
	printf("3. Sort Data\n");
	printf("4. Export Data\n");
	printf("5. Exit\n");
	printf("Your choice: ");
	
	scanf("%d", &choice);
	
	while(choice != 5){
	
		while(choice > 4 || choice < 1){
			printf("Enter a valid number!\n");
			printf("Your choice: ");
			scanf("%d", &choice);
		}
		
		switch(choice){
			case 1:
				display(data, idx);
				break;
				
			case 2:
				selectRow(data, idx);			
				break;
				
			case 3:
				sortBy(data, idx);
				break;
				
			case 4:
				exportFunction(data, idx);
				break;		
		}
		
		printf("Your choice: ");
		scanf("%d", &choice);
	}
	
	return 0;
}
