#define sensor 10
#define led1 2

boolean val = 1;
boolean ledstatus = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(digitalRead(sensor));
  while (ledstatus == 0) {
    val = digitalRead(sensor);

    if(val == 0) {
      ledstatus = 1;
      digitalWrite(led1,ledstatus);
      delay(100);
      break;
    }
  }
  
  while (ledstatus == 1) {
    val = digitalRead(sensor);

    if (val == 0) {
      ledstatus = 0;
      digitalWrite(led1, ledstatus);
      delay(100);
      break;
    }
  }
}
