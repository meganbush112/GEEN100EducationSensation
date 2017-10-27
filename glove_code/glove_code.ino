

// constants won't change. They're used here to set pin numbers:
const int buttonPinA = 2;     // the number of the pushbutton pin
const int buttonPinB = 3;
const int buttonPinC = 4;
const int buttonPinD = 5;
const int buttonPinE = 6;
const int buttonPinG = 7;
const int buttonPinH = 8;
const int buttonPinI = 9;
const int buttonPinL = 10;
const int buttonPinM = 11;
const int buttonPinN = 12;
const int buttonPinO = 13;
const int buttonPinS = A0;
const int buttonPinU = A1;
const int buttonPinW = A2;
const int buttonPinY = A3;
int Dcount = 0;
bool Lpressed = false;

// variables will change:

void setup() {
  // initialize the LED pin as an output:
  Serial.begin(9600);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPinA, INPUT);
  pinMode(buttonPinB, INPUT);
  pinMode(buttonPinC, INPUT);
  pinMode(buttonPinD, INPUT);
  pinMode(buttonPinE, INPUT);
  pinMode(buttonPinG, INPUT);
  pinMode(buttonPinH, INPUT);
  pinMode(buttonPinI, INPUT);
  pinMode(buttonPinL, INPUT);
  pinMode(buttonPinM, INPUT);
  pinMode(buttonPinN, INPUT);
  pinMode(buttonPinO, INPUT);
  pinMode(buttonPinS, INPUT);
  pinMode(buttonPinU, INPUT);
  pinMode(buttonPinW, INPUT);
  pinMode(buttonPinY, INPUT);
}

void loop() {

  
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (digitalRead(buttonPinA) == HIGH) {
    // turn LED on:
    
    Serial.println("A"); 
    delay(300);
  } 
  
  if (digitalRead(buttonPinD)==HIGH) {
   Dcount++;
   for(int i = 0; i < 10; i++){
    if (digitalRead(buttonPinD)==HIGH) {
      Dcount++;
    }
    delay (200);
   }
   for(int i = 0; i < 5; i++){
   if (Dcount > 2 && digitalRead (buttonPinL)== HIGH){
    Lpressed=true;
     delay(200);
   }
   }

   if(Lpressed){
    Serial.println("L");
   }else{
    Serial.println("D");
   }
    
  }
}
