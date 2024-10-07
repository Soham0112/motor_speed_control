const int pwmPin = 9;  // PWM-capable pin (e.g., pin 9)
int motorSpeed = 0;  // Speed value (0-255 for 0-100% PWM)

void setup() {
    pinMode(pwmPin, OUTPUT);
}

void loop() {
    motorSpeed = 100;
    analogWrite(pwmPin, motorSpeed);  // Set motor speed

    delay(5000);

    motorSpeed = 200;
    analogWrite(pwmPin, motorSpeed);  // Set motor speed

    delay(5000);

    // motorSpeed = 255;
    // analogWrite(pwmPin, motorSpeed);

}

