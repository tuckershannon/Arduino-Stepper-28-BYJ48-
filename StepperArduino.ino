//Arduino Stepper Motor Function

int MotorPins[] = {7, 6, 5, 4};
int Seq[][4] = {{1, 0, 0, 0},
                {1, 1, 0, 0}, 
                {0, 1, 0, 0}, 
                {0, 1, 1, 0}, 
                {0, 0, 1, 0}, 
                {0, 0, 1, 1}, 
                {0, 0, 0, 1}, 
                {1, 0, 0, 1}};
int nSteps = 0;
int seqStep = 0;
void setup() {
  for (int nPin = 0; nPin < 4; nPin++) {
    pi
}



int takeStep(char dir[],int tDelay = 5) {
  int Pin;
  for (int nPin = 0; nPin < 4; nPin++) {
    Pin = MotorPins[nPin];
    if (Seq[seqStep][nPin] != 0) {digitalWrite(Pin, HIGH);}
    else {digitalWrite(Pin, LOW);}
  }
  delay(tDelay);
  if (dir == "right") {
    nSteps++;
    if (seqStep == 7) {seqStep = 0;}
    else {seqStep++;}
  }
  if (dir == "left") {
    nSteps--;
    if (seqStep == 0) {seqStep = 7;}
    else {seqStep--;}
  }
}


void loop() {
  for (int x = 0; x < 500; x++){
    takeStep("left");
  }
  for (int x = 0; x < 500; x++){
    takeStep("right");
  }
}nMode(MotorPins[nPin], OUTPUT);
  }
