#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BLUE(s) "\x1b[34m" s "\x1b[0m"
#define GREEN(s) "\x1b[32m" s "\x1b[0m"
#define RED(s) "\x1b[31m" s "\x1b[0m"

int main(void) {
    char cmd[25];
    printf(BLUE("Welcome to Lemons Memory Hacker: "));
    fgets(cmd, sizeof(cmd), stdin);
    cmd[strcspn(cmd, "\n")] = 0;

    if (strcmp(cmd, "read") == 0 || strcmp(cmd, "write") == 0) {
        char pid_input[16];
        printf(BLUE("PID: "));
        fgets(pid_input, sizeof(pid_input), stdin);
        pid_input[strcspn(pid_input, "\n")] = 0;
        DWORD pid = atoi(pid_input);

        HANDLE h = OpenProcess(PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, 0, pid);
        if (!h) {
            printf(RED("Failed to open process!\n"));
            return 1;
        }

        unsigned long addr;
        printf(BLUE("Address (hex, e.g. 0x12345678): "));
        scanf("%lx", &addr);

        int value;
        if (strcmp(cmd, "read") == 0) {
            if (ReadProcessMemory(h, (LPCVOID)addr, &value, sizeof(value), 0))
                printf(GREEN("Value read: %d\n"), value);
            else
                printf(RED("Failed to read memory!\n"));
        } else {
            printf(BLUE("New value: "));
            scanf("%d", &value);
            if (WriteProcessMemory(h, (LPVOID)addr, &value, sizeof(value), 0))
                printf(GREEN("Value written: %d\n"), value);

            else
                printf(RED("Failed to write memory!\n"));

        }

        CloseHandle(h);
    }
}
