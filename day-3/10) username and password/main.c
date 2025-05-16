#include <stdio.h>
#include <string.h>
int main() {
    char username[50];
    char password[50];
    const char hardcoded_username[] = "admin";
    const char hardcoded_password[] = "password123";
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(username, hardcoded_username) == 0 && strcmp(password, hardcoded_password) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }
    return 0;
}
