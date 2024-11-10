#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
//  int open(const char *pathname, int flags);
// possible flags: O_RDONLY, O_WRONLY, O_RDWR, O_CREAT, O_EXCL, O_TRUNC, O_APPEND
// on success it returns the file descriptor >2
// on failure it returns -1

//  int open(const char *pathname, int flags, mode_t mode);

int main()
{
     //read from fd and write to fd2
     int n, fd, fd2;
     char buff[50];
     fd = open("text.txt", O_RDONLY); // opens test.txt in read mode and the file descriptor is saved in integer fd.
     printf("The file descriptor of the file is: %d\n",fd); 
     n=read(fd,buff,10); 
     fd2=open("write.txt",O_CREAT|O_WRONLY,0777); // opens write.txt in write mode and the file descriptor is saved in integer fd2.
     write(fd2,buff,n); // writes the content of buff to write.txt
     write(fd2,"new text",8); // prints the content of buff on the screen
     write(fd2,"new text",8);
     write(fd2,"new text",8);
     write(fd2,"new text",8);//always adds text to the end of the file
//this similar behaviour can be achieved using O_APPEND flag

     close(fd); // closes the file descriptor fd
}

// Q1. What does the open() system call returns on success?
// Q2. Which system call is use to know the file descriptor of a file?
// Q3. The value of the file descriptor of any user-created file is always greater than 2. Why?
// Q4. What is the difference between O_APPEND and O_TRUNC flags used in open() system call?