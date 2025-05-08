#include "kernel/types.h"
#include "user/user.h"

int main() {
    int result = trigger();  
    if (result == 0) {
        printf("Trigger system call executed successfully.\n");
    } else {
        printf("Trigger system call failed.\n");
    }
    exit(0);
}
