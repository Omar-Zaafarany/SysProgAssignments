#include <stdio.h>
#include <string.h>
#define SIZE 100
int main(int argc, char *argv[]){
	printf("Hello From FemtoShell\n");
	char buf[SIZE];
	// printf("%d", strcmp(buf, "echo"));
	while(1){
		scanf("%s", buf);
		if(strcmp(buf, "echo") == 0){
			fgets(buf, SIZE, stdin);
                	printf("%s", &buf[1]);
        	}
        	else if(strcmp(buf, "exit") == 0){
                	printf("Good bye\n");
                	return 0;
        	}
		else{
			printf("Invalid Command\n");
		}
	}
	return 0;
}
