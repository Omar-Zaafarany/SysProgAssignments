#include <unistd.h>
#include <string.h>
#define SIZE 1000
int main(int argc, char *argv[]){
	char buf[SIZE];
	getcwd(buf, SIZE); 
	write(1,buf,strlen(buf));
	write(1,"\n",1);
	return 0;
}
