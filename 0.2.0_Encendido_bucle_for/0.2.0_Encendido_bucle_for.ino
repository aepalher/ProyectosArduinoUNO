void setup() {
  for(int i=0;i<3;i++){
    pinMode(i,OUTPUT);
  }
}
void loop() {
  for(int j=0;j<3;j++){
    digitalWrite(j,HIGH);
    delay(500);
    digitalWrite(j,LOW);
  }
  for(int j=2;j>0;j--){ 
    digitalWrite(j,HIGH);
    delay(500);
    digitalWrite(j,LOW);
  }
}
