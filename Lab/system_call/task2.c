#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t c_pid = fork(); 
    
    if (c_pid < 0) { 

        printf("Fork failed\n");
        return 1;

    } 
    
    else if (c_pid == 0) { 

        pid_t grandc_pid = fork(); 

        
        if (grandc_pid < 0) { 

            printf("Fork failed\n");
            return 1;

        } 
        
        else if (grandc_pid == 0) { 

            printf("I am grandchild\n");
            exit(0); 
            
        }
        
        wait(NULL); 
        printf("I am child\n"); 
        exit(0); 
    } 
    
    else { 
        wait(NULL); 
        printf("I am parent\n"); 
    }
    return 0;
}



