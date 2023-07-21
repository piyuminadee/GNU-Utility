#include <stdio.h>

void file_size(){

    const char* file_name = "New Text Document.txt"; // New Text Document.txt fle is also located in same folder
    FILE* file = fopen(file_name, "rb"); // Open the file in binary mode
       if (file == NULL) {
        printf("Error opening the file.\n"); //If file is not located in same folder
        return -1;
    }


       fseek(file, 0, SEEK_END);  // Move the file pointer to the end of the file


       long file_Size = ftell(file);  // Get the current position of the file pointer, which is the file size

       fclose(file);  // closes a stream pointed to by stream

    printf("File size is: %ld bytes\n", file_Size);



}

int main() {

    file_size(); //call the function

    return 0;
}
