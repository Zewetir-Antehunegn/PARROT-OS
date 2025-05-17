#include <stdio.h>
#include <sys/sysinfo.h>

int main() {
    struct sysinfo info;

    if (sysinfo(&info) == 0) {
        printf("System uptime: %ld seconds\n", info.uptime);
        printf("Total RAM: %lu MB\n", info.totalram / (1024 * 1024));
        printf("Free RAM: %lu MB\n", info.freeram / (1024 * 1024));
        printf("Number of processes: %d\n", info.procs);
    } else {
        perror("sysinfo");
    }

    return 0;
}
