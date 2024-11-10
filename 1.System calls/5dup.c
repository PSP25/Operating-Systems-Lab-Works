// dup() system call is used to duplicate a file descriptor.
// It creates a copy of the old file descriptor to a new file descriptor.
//  The new file descriptor can be system-generated or a number of your choice depending upon either you use dup() or dup2().

// syntax
//     int dup(int oldfd);
//     int dup2(int oldfd, int newfd);

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
int main()
{
     int old_fd, new_fd,new_fd1;
     old_fd = open("text.txt", O_RDWR);
     printf("File descriptor is %d\n", old_fd);
     new_fd = dup(old_fd);
     new_fd1 = dup2(old_fd, 10);
     //IMP<IMP<IMP
     //if the newfd is already taken, it will be closed and the newfd will be assigned to the new file descriptor
     printf("New file descriptor are: %d,%d\n", new_fd,new_fd1);
}

// Q1. Can you assign 0,1,2 as new file descriptors using dup()? 
     //For dup(): You cannot control whether it returns 0, 1, or 2.
// Q2. Can you assign 0,1,2 as new file descriptors using dup2()?
     // For dup2(): You can explicitly assign 0, 1, or 2 as new
     // file descriptors by specifying them as the target (newfd). 
