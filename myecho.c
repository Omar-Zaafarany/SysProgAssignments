#include <stdio.h>
int main(int argc, char *argv[]){
	if(argc != 2)
		printf("argument count mismatch");	
	
	printf("%s\n", argv[1]);	
	return 0;
}
