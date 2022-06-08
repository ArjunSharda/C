#include <stdio.h>
int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  if (number > 10 ) {
    printf("Your number is over 10. Your number: %d \n", number);
  }
  if (number < 10) {
    printf("Your number is under 10. Your number: %d \n", number);
  }
  return 0;
}
