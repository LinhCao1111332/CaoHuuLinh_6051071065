#define echo 8
#define trig 9
#define relay 2

long time, distance;

void dokhoangcach()
{

  digitalWrite(trig, LOW); 
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);  
  delayMicroseconds(10); 
  digitalWrite(trig, LOW); 

  // Đo độ rộng xung HIGH ở chân echo.
  time = pulseIn(echo, HIGH);

  distance = time / 2 / 29.142;
  Serial.println(distance);
}

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(relay, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {

  distance = 0;
  dokhoangcach();
  Serial.println(distance);
   if (distance > 50 && distance < 100) {
      digitalWrite(relay, LOW); 
      delay(1000);
    }
  
  else {
      delay(2000);
      digitalWrite(relay, HIGH);
    }
}
