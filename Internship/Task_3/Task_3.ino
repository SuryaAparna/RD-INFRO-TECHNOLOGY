const int motorPWM = 9;     
const int motorIn1 = 7;    
const int motorIn2 = 8;     
const int potPin = A0;      
void setup() {
  pinMode(motorPWM, OUTPUT);
  pinMode(motorIn1, OUTPUT);
  pinMode(motorIn2, OUTPUT);
  pinMode(potPin, INPUT);
  digitalWrite(motorIn1, HIGH);
  digitalWrite(motorIn2, LOW);
  Serial.begin(9600);
}
void loop() {
  int potValue = analogRead(potPin);
  int motorSpeed = map(potValue, 0, 1023, 0, 255);
  analogWrite(motorPWM, motorSpeed);
  Serial.print("Speed: ");
  Serial.println(motorSpeed);
  delay(100);
}
