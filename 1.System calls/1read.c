#include<unistd.h>
//ssize_t read(int fd, const void *buf, size_t count);
//fd: 0-read from keyboard, 1- read from screen, 2-read from error
int main()
{
char buff[20];
//IMP IMP IMP
//read returns the number of bytes read from the standard input device
//This canbe used as third parameter in write function to print the exact number of bytes read

int nread;
char buff[20];
nread=read(0,buff,10);//read 10 bytes from standard input device(keyboard), store in buffer (buff)
write(1,buff,nread);//print 10 bytes from the buffer on the screen
}