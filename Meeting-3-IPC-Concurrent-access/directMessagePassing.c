// Direct addressing message passing in C

#include <stdio.h>

// Mock function to simulate sending a message directly to a process
void direct_send(int process_id, const char* message) {
    printf("Sending message to process %d: %s\n", process_id, message);
}

// Mock function to simulate receiving a message in a process
void direct_receive(int process_id, char* buffer) {
    // This is where the process would receive a message directly
    // For illustration, we'll just say a message was received.
    sprintf(buffer, "Received a message at process %d", process_id);
    printf("%s\n", buffer);
}

int main() {
    int process_id = 123; // Example process ID
    char message[] = "Hello, Process!";
    char buffer[100];

    direct_send(process_id, message);
    direct_receive(process_id, buffer);

    return 0;
}
