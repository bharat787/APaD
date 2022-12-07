#include<stdio.h>
#include<string.h>

int main(){
	char correct_flag[35];
	printf("Enter flag for verification");
	scanf("%s", correct_flag);
	if(strcmp(correct_flag,"jncekjnf9jn2sd4jn7") == 0){
		printf("Valid Flag");
	}
	else{
		printf("Not Correct");
	}
	return 0;
}
