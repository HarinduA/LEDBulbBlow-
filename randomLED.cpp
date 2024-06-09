// Define the LED pins
#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6

void setup() {
  // Initialize each LED pin as an output
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);

  // Initialize random seed
  randomSeed(analogRead(0));
}

void loop() {
  // Generate a random number between 2 and 6
  int randomLED = random(2, 7);
  
  // Turn on the random LED
  digitalWrite(randomLED, HIGH);
  delay(500); // Wait for 0.5 seconds
  
  // Turn off the random LED
  digitalWrite(randomLED, LOW);
  delay(500); // Wait for 0.5 seconds
}
