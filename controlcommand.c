#include <stdio.h>
#include <stdlib.h>

int main() {
  // Define the AC remote control codes.
  const int power_on = 1;
  const int power_off = 2;
  const int temperature_up = 3;
  const int temperature_down = 4;
  const int fan_speed_up = 5;
  const int fan_speed_down = 6;

  // Get the user input.
  int command;
  printf("Enter the command: ");
  scanf("%d", &command);

  // Send the command to the AC remote.
  if (command == power_on) {
    printf("Turning on the AC...\n");
  } else if (command == power_off) {
    printf("Turning off the AC...\n");
  } else if (command == temperature_up) {
    printf("Increasing the temperature...\n");
  } else if (command == temperature_down) {
    printf("Decreasing the temperature...\n");
  } else if (command == fan_speed_up) {
    printf("Increasing the fan speed...\n");
  } else if (command == fan_speed_down) {
    printf("Decreasing the fan speed...\n");
  } else {
    printf("Invalid command.\n");
  }

  return 0;
}
