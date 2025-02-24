#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define SIZE 100
int main(int argc, char *argv[]){
	if(argc != 3){	
		char buf[] = "argument count mismatch \n";
		write(1,buf,strlen(buf));
		exit(-1);
	}
	
	char buf[SIZE];
	int fd = open(argv[1],O_RDONLY);
	if(fd < 0){	
		char buf[] = "Could not open the file \n";
		write(1,buf,strlen(buf));
		exit(-2);
	}
	
	int fd_file = creat(argv[2], 0644);
	if(fd_file < 0){	
		char buf[] = "Could not create the file \n";
		write(1,buf,strlen(buf));
		exit(-3);
	}

	int num_read;
	while((num_read = read(fd, buf, SIZE))>0){
		if(write(fd_file, buf, num_read) < 0){
			char buf[] = "Could not write to  file \n";
			write(1,buf,strlen(buf));
			exit(-4);
		}
	}
	close(fd);
	close(fd_file);
	return 0;

}
