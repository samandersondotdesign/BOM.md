int fsrAnalogPin = 0; 
int LEDpin = 5;
int fsrReading;
int timeSince;
unsigned long triggerTime;
unsigned long time;

void setup(void) {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(11, OUTPUT);
}

int prevFSR = fsrReading;

void loop(void) {
  fsrReading = analogRead(fsrAnalogPin);
  Serial.print("FSR reading = ");
  Serial.println(fsrReading);
  
  int currentFSR = fsrReading;

  Serial.print("Time: ");
  time = millis();
  Serial.println(time / 1000);
  delay(100);
  timeSince = (time - triggerTime) / 1000;
//  Serial.print("---------------Time since: ");
//  Serial.println(timeSince);

  if (timeSince > 1) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }

  if (timeSince > 2) {
    digitalWrite(4, HIGH);
  } else {
    digitalWrite(4, LOW);
  }

  if (timeSince > 3) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }

  if (timeSince > 4) {
    digitalWrite(2, HIGH);
  } else {
    digitalWrite(2, LOW);
  }

  if (timeSince > 5) {
    digitalWrite(11, HIGH);
  } else {
    digitalWrite(11, LOW);
  }

  if ((currentFSR >= prevFSR + 100 || currentFSR < prevFSR - 100)) {
    triggerTime = millis();
    Serial.println("--------------------------  FSR CHANGE");
  }
  
  prevFSR = fsrReading;


}


