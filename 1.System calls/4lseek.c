// lseek(fd,5,SEEK_SET) –> this moves the pointer 5 positions ahead starting from the beginning of the file
// lseek(fd,5,SEEK_CUR) –> this moves the pointer 5 positions ahead from the current position in the file
// lseek(fd,-5,SEEK_CUR) –> this moves the pointer 5 positions back from the current position in the file
// lseek(fd,-5,SEEK_END) -> this moves the pointer 5 positions back from the end of the file
// lseek(fd,0,SEEK_END) -> this moves the pointer to the end of the file
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
int main()
{
     int n, f;
     char buff[10];
     f = open("seeking.txt", O_RDWR);
     read(f, buff, 10);
     write(1, buff, 10);
     lseek(f, 5, SEEK_CUR);
     read(f, buff, 10);
     write(1, buff, 10);
}

// Q1. Write a program to print characters starting from 15th character till the 20th character of file F1.txt into file F4.txt.
// Q2. Write a program to print the last 5 characters of a file.
// Q3. Write a program to read a number(n) from the user. Print the first n characters from the file F1.txt.
// Q4. Write a program to print the second half of a file.
// Q5. Write program(s) to show the use of SEEK_SET, SEEK_CUR and SEEK_END. (
