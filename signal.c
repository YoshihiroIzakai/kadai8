#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void signal_handler(int signum){
    puts("中断します");
    exit(1);
}

int main(void){
    signal(SIGALRM, signal_handler);

    alarm(3);
    while(1){
    }
    return 0;
}