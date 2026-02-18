#include <stdio.h>
#include <windows.h>
int main() {
    long long int health = 153;
    while (1) {
        printf("Health: %d\n", health);
        printf("This PID: %lu\n", GetCurrentProcessId());
        printf("Adress of Health: %p\n", &health);
        Sleep(1000);
    }
}
