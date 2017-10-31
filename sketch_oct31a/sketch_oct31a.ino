int x;

void setup() {

  pinMode (A0, INPUT);
  Serial.begin(9600);

}

void loop() {
   x=analogRead(A0);
  delay(1000);
  Serial.println(x);
  //x = map (x, 0, 1023, 0, 255);

}
