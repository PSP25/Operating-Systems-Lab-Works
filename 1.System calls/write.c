#include<unistd.h>
int main()
{
     //syntax
     //ssize_t write(int fd, const void *buf, size_t count);
     //fd: 1-write on screen, 2- write on error, 0-read from keyboard
write(1,"hello\n",6); //1 is the file descriptor, "hello\n" is the data, 6 is the count of characters in data
}