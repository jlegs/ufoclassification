#define LED3 13  // The pin the LED is connected to
#define LED2 12  // The pin the LED is connected to
#define LED1 11  // The pin the LED is connected to
void setup() {
  pinMode(LED1, OUTPUT); // Declare the LED as an output
  pinMode(LED2, OUTPUT); // Declare the LED as an output
  pinMode(LED3, OUTPUT); // Declare the LED as an output
}

void loop() {
  delay(1000);
  digitalWrite(LED1, HIGH); // Turn the LED on
  digitalWrite(LED2, HIGH); // Turn the LED on
  digitalWrite(LED3, HIGH); // Turn the LED on
  delay(1000);
  digitalWrite(LED1, HIGH); // Turn the LED on
  digitalWrite(LED2, LOW); // Turn the LED on
  digitalWrite(LED3, HIGH); // Turn the LED on

  delay(1000);
  digitalWrite(LED1, LOW); // Turn the LED on
  digitalWrite(LED2, HIGH); // Turn the LED on
  digitalWrite(LED3, HIGH); // Turn the LED on

  delay(1000);
  digitalWrite(LED1, LOW); // Turn the LED on
  digitalWrite(LED2, HIGH); // Turn the LED on
  digitalWrite(LED3, LOW); // Turn the LED on

}
