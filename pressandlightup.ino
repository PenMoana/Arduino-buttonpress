int whiteLed = 13;
int blueLed = 12;
int redLed = 11;
int greenLed = 10;
int yellowLed = 9;
int buttonPin = 8;
int buttonState = LOW;

void setup() {
  Serial.begin(9600);
  while (!Serial); 
  pinMode(buttonPin, INPUT);
  pinMode(whiteLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
}

void loop() {
  ledOn(whiteLed);
  buttonWait();
  ledOff(whiteLed);
  ledOn(blueLed);
  buttonWait();
  ledOff(blueLed);
  ledOn(redLed);
  buttonWait();
  ledOff(redLed);
  ledOn(greenLed);
  buttonWait();
  ledOff(greenLed);
  ledOn(yellowLed);
  buttonWait();
  ledOff(yellowLed);
}

void ledOn (int led){
  digitalWrite(led,HIGH);
}

void ledOff (int led){
  digitalWrite(led,LOW);
}

void buttonWait (){
    while (!buttonState) {
    buttonState = digitalRead(buttonPin);
    //delay(1);
  }
  while (buttonState) {
    buttonState = digitalRead(buttonPin);
    delay(1);
  }
  buttonState = LOW;
}