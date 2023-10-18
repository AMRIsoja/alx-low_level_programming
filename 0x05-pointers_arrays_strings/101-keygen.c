#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define ALPHABET_SIZE 62

char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

int main() {
  int password_length;
  char password[10];

  // Seed the random number generator with the current time.
  srand(time(NULL));

  // Get the password length from the user.
  printf("Enter the password length: ");
  scanf("%d", &password_length);

  // Generate a random password of the specified length.
  for (int i = 0; i < password_length; i++) {
    password[i] = alphabet[rand() % ALPHABET_SIZE];
  }

  // Get the password from the user.
  char *user_password;
  size_t user_password_length;
  getline(&user_password, &user_password_length, stdin);

  // Check if the password is valid.
  if (strcmp(password, user_password) == 0) {
    printf("Tada! Congrats\n");
    return 1;
  } else {
    printf("Wrong password\n");
    return 0;
  }
}

