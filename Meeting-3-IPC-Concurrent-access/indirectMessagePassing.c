// Indirect addressing message passing in C

#include <stdio.h>

// Mock function to simulate sending a message to a mailbox
void indirect_send(int mailbox_id, const char* message) {
    printf("Sending message to mailbox %d: %s\n", mailbox_id, message);
}

// Mock function to simulate receiving a message from a mailbox
void indirect_receive(int mailbox_id, char* buffer) {
    // This is where the process would check a mailbox for a message
    // For illustration, we'll just say a message was received.
    sprintf(buffer, "Received a message from mailbox %d", mailbox_id);
    printf("%s\n", buffer);
}

int main() {
    int mailbox_id = 456; // Example mailbox ID
    char message[] = "Hello, Mailbox!";
    char buffer[100];

    indirect_send(mailbox_id, message);
    indirect_receive(mailbox_id, buffer);

    return 0;
}
