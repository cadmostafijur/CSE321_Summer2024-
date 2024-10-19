#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
    pid_t pt_pid = getpid(); 

    printf("1. Parent process ID: %d\n", pt_pid); 

    pid_t c_pid = fork(); 

    if (c_pid < 0) { 
        printf("fork failed\n");
        return 1;
    } 
    
    else if (c_pid == 0) { 
    	printf("2. Child process ID: %d\n", getpid());
        pid_t gc1_pid = fork(); 

        if (gc1_pid < 0) { 
            printf("fork failed\n");
            return 1;
        } 
        
        else if (gc1_pid == 0) { 
            printf("3. Grandchild process ID: %d\n", getpid()); 
        } 
        
        else { 
            pid_t gc2_pid = fork(); 
            if (gc2_pid < 0) { 
                printf("fork failed\n");
                return 1;
            } 
            
            else if (gc2_pid == 0) { 
                printf("4. Grandchild process ID: %d\n", getpid()); 
            } 
            
            else { 
                pid_t gc3_pid = fork(); 

                if (gc3_pid < 0) { 
                    printf("fork failed\n");
                    return 1;
                } 
                
                else if (gc3_pid == 0) { 
                    printf("5. Grandchild process ID: %d\n", getpid()); 
                }
            }
        }
    } 
    
    else { 
        wait(NULL); 
    }
    return 0;
}



