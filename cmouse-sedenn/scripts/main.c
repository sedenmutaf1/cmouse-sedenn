#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>


int main() {

    ssize_t bytesRead;
    int fd = open("/dev/input/mouse1", O_RDONLY);
    if (fd == -1) {
        perror("Error opening mouse input file");
        exit(EXIT_FAILURE);
    }
    int x=0;
    int y=0;
    char data[4];
    while(1) {
        bytesRead = read(fd,data , sizeof(data));
        if(bytesRead==-1){
            exit(1);
        }
        x+=data[1];
        y+=data[2];

        printf("Relative Mouse Position: X=%d, Y=%d\n", x, y);
        fflush(stdout);
    }

}
