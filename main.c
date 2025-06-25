#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#ifdef _WIN32
    #include <BaseTsd.h>
    typedef SSIZE_T ssize_t; //this is windows alterative for ssize_t I wont be using it but just in case anyone wants to
#endif
typedef struct{
    char* buffer;
    size_t buffer_lenght;
    int input_lenght;
}InputBuffer;
InputBuffer * new_input_buffer(){
    InputBuffer* input_buffer=(InputBuffer*)malloc(sizeof(InputBuffer));
    input_buffer->buffer=NULL;
    input_buffer->buffer_lenght=0;
    input_buffer->input_lenght=0;
    return input_buffer;
}
void print_prompt(){
    printf("db >: ");
}
void read_input(InputBuffer* input_buffer){
    
}
int main(int argc,char* argv[]){
    InputBuffer * input_buffer=new_input_buffer();
    while(true){
        print_prompt();
        read_input(input_buffer);
        if(strcmp(input_buffer->buffer,".exit")==0){
            close_input_buffer(input_buffer);
            exit(EXIT_SUCCESS);
        }else{
        printf("unrecognised command '%s' \n",input_buffer->buffer);
    }
}
}