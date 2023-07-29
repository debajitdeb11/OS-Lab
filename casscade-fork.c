#include <unistd.h>
#include <stdio.h>

int main() {
    int pid = fork();
    pid = fork();
    printf("Hello, World in => %s PID = %d\n", pid > 0 ? "Printing from Parent Process" : "Printing from ChildProcess", pid);
    return 0;
}