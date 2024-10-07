const int ledPin = 2;  // Pin number for the built-in LED

void setup() {
    Serial.begin(9600);  // Start serial communication at 9600 baud rate
    pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
}

void loop() {
    if (Serial.available() > 0) {
        char command = Serial.read();  // Read the incoming byte
        if (command == '1') {  // If the command is '1'
            digitalWrite(ledPin, HIGH);  // Turn the LED ON
        } else if (command == '0') {  // If the command is '0'
            digitalWrite(ledPin, LOW);  // Turn the LED OFF
        }
    }
}

