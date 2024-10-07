const int motorPin = 9;  // Pin connected to the motor (PWM pin)
char receivedIndex = ' ';  // Variable to store the received index as a character

void setup() {
  Serial.begin(9600);  // Start serial communication
  pinMode(motorPin, OUTPUT);  // Set motor pin as output
}

void loop() {
  // Check if data is available to read from serial
  if (Serial.available() > 0) {
    // Read the received character from serial
    receivedIndex = Serial.read();

    // Control motor speed based on the received index character
    switch (receivedIndex) {
      case '0':
        analogWrite(motorPin, 40);  // 20% speed (40 out of 255)
        break;
      case '1':
        analogWrite(motorPin, 80);  // 40% speed
        break;
      case '2':
        analogWrite(motorPin, 120); // 60% speed
        break;
      case '3':
        analogWrite(motorPin, 160); // 80% speed
        break;
      case '4':
        analogWrite(motorPin, 200); // 100% speed
        break;
      default:
        analogWrite(motorPin, 0);   // Stop motor if invalid index
        break;
    }
  }
}
