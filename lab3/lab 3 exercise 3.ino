void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(8) == LOW) {
    Serial.println("It's 2023");
  } else {
    Serial.println("Hello World!");
  }
  delay(500);
}
