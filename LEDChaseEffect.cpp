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
}

void loop() {
  // Turn on each LED in sequence
  digitalWrite(LED1, HIGH);
  delay(100);
  digitalWrite(LED1, LOW);

  digitalWrite(LED2, HIGH);
  delay(100);
  digitalWrite(LED2, LOW);

  digitalWrite(LED3, HIGH);
  delay(100);
  digitalWrite(LED3, LOW);

  digitalWrite(LED4, HIGH);
  delay(100);
  digitalWrite(LED4, LOW);

  digitalWrite(LED5, HIGH);
  delay(100);
  digitalWrite(LED5, LOW);
  
  // Turn on each LED in reverse sequence
  digitalWrite(LED5, HIGH);
  delay(100);
  digitalWrite(LED5, LOW);

  digitalWrite(LED4, HIGH);
  delay(100);
  digitalWrite(LED4, LOW);

  digitalWrite(LED3, HIGH);
  delay(100);
  digitalWrite(LED3, LOW);

  digitalWrite(LED2, HIGH);
  delay(100);
  digitalWrite(LED2, LOW);

  digitalWrite(LED1, HIGH);
  delay(100);
  digitalWrite(LED1, LOW);
}
