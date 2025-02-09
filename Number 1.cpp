#include <stdio.h>
#include <string.h>

int main(){
	char string[101];
	char temp[101];
	
	scanf("%s", &string);
	
	strcpy(temp, string);
	
//	printf("%s", temp);
	
	int l = strlen(string);
	
	for(int i = 0, j = l - 1; i < l; i++, j--){
		string[i] = temp[j];
	}
	
//	printf("%s", string);

	for(int i = 0; i < l; i++){
		if(string[i] >= 'a'){
			string[i] = string[i] - 32;
		}
		else{
			string[i] = string[i] + 32;
		}
	}
	
	printf("%s\n", string);
	
	return 0;
}
