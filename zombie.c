#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int pid = fork();
    printf("Process ID: %d\n", pid);

    if(pid > 0)
    {
        sleep(30);
    }
    else if(pid == 0)
    {
        printf("\nZombie Process Created Successfully!");
        printf("\nIt will be active for 30 seconds");
        exit(0);
    }
    else
    {
        printf("\nSorry, the child process could not be created");
    }
    return 0;
}