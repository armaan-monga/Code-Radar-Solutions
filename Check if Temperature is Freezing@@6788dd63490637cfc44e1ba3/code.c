#include <stdio.h>

int main() {
  int temperature;

  // Read the temperature from the user
  scanf("%d", &temperature);

  // Check if the temperature is freezing or above freezing
  if (temperature <= 0) {
    printf("Freezing\n");
  } else {
    printf("Above Freezing\n");
  }

  return 0;
}