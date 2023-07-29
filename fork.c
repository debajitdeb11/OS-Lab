#include <unistd.h>
#include <stdio.h>

int main() {
    int pid = fork();
    printf("Hello, World in => %s PID = %d\n", pid > 0 ? "Printing from Parent Process" : "Printing from Child Process", pid);
    return 0;
}