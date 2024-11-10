#include<stdio.h>
#include<unistd.h>
int main()
{
     //syntax
     //ssize_t write(int fd, const void *buf, size_t count);
     //fd: 1-write on screen, 2- write on error, 0-read from keyboard
     //anything else will be treated as file descriptor
write(1,"hello\n",6); //1 is the file descriptor, "hello\n" is the data, 6 is the count of characters in data

int count;
count=write(1,"hello\n",6);
printf("Total bytes written: %d\n",count);
}

// Q1. What does the write() system call return on success?
// Q2. What does the write() system call return on failure?
// Q3. Can you use write() system to send data to a printer?
// Q4. Can write system be used to write into a file “xyz.txt” without knowing the file descriptor of xyz.txt?
// Q5. How to access the manual page of write()?
// Q6. What does the read() system call return on success?