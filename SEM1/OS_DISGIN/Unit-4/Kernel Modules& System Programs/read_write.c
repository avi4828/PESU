#include <unistd.h>
#include <stdio.h>

int main() 
{
    char buffer[10]; // to store the input values
    int bytes_read;
    
    //file descriptor for std.input (keyboard) - 0, std.out(monitor) - 1

    // Prompt user for input - Enter a number: is 16 characters
    write(1, "Enter a number: ", 16);

    // Read input from standard input using read syscall
    bytes_read = read(0, buffer, sizeof(buffer) - 1);
    
    

    buffer[bytes_read]='\0'; //to add the terminating character
    
    // Write the buffer content using write syscall
    
    
    write(1,"The Entered number is:",22);
    write(1,buffer,bytes_read);
    
    printf("The number of bytes read is:%d",bytes_read);
    
    return 0;
}

