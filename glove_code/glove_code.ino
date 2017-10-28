

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
int Bcount = 0;
int Gcount = 0;
int Hcount = 0;
int Scount = 0;
int Ycount = 0;
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
  //BUTTON A
  if (digitalRead(buttonPinA) == HIGH) {
    // turn LED on:
    
    Serial.println("A"); 
    delay(300);
  }

   //BUTTON E
   if (digitalRead(buttonPinE) == HIGH) {
    // turn LED on:
    
    Serial.println("E"); 
    delay(300);
  }

   //BUTTON I
   if (digitalRead(buttonPinI) == HIGH) {
    // turn LED on:
    
    Serial.println("I"); 
    delay(300);
  }

   //BUTTON O
   if (digitalRead(buttonPinO) == HIGH) {
    // turn LED on:
    
    Serial.println("O"); 
    delay(300);
  }

   //BUTTON U
   if (digitalRead(buttonPinU) == HIGH) {
    // turn LED on:
    
    Serial.println("U"); 
    delay(300);
  }

  //BUTTON M
   if (digitalRead(buttonPinM) == HIGH) {
    // turn LED on:
    
    Serial.println("M"); 
    delay(300);
  }

  //BUTTON N
   if (digitalRead(buttonPinN) == HIGH) {
    // turn LED on:
    
    Serial.println("N"); 
    delay(300);
  }


  //BUTTON C
   if (digitalRead(buttonPinC) == HIGH) {
    // turn LED on:
    
    Serial.println("C"); 
    delay(300);
  }

  //BUTTON W
   if (digitalRead(buttonPinW) == HIGH) {
    // turn LED on:
    
    Serial.println("W"); 
    delay(300);
  }
  
  
    //BUTTON D and L
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
    Lpressed = false;
    Dcount=0;
  }

  //BUTTON B
  if (digitalRead(buttonPinB)==HIGH) {
   Bcount++;
   for(int i = 0; i < 10; i++){
    if (digitalRead(buttonPinB)==HIGH) {
      Bcount++;
    }
    delay (200);
    
   if(Bcount >= 3){
    Serial.println("B"); 
   }
    Bcount=0;
    
   }
  }
  
   //BUTTON G
  if (digitalRead(buttonPinG)==HIGH) {
   Gcount++;
   for(int i = 0; i < 10; i++){
    if (digitalRead(buttonPinG)==HIGH) {
      Gcount++;
    }
    delay (200);
    
   if(Gcount >= 3){
    Serial.println("G"); 
   }
    Gcount=0;
    
   }
  }


  //BUTTON H
  if (digitalRead(buttonPinH)==HIGH) {
   Hcount++;
   for(int i = 0; i < 10; i++){
    if (digitalRead(buttonPinH)==HIGH) {
      Hcount++;
    }
    delay (200);
    
   if(Hcount >= 3){
    Serial.println("H"); 
   }
    Hcount=0;
    
   }
  }

  //BUTTON S
  if (digitalRead(buttonPinS)==HIGH) {
   Scount++;
   for(int i = 0; i < 10; i++){
    if (digitalRead(buttonPinS)==HIGH) {
      Scount++;
    }
    delay (200);
    
   if(Scount >= 3){
    Serial.println("S"); 
   }
    Scount=0;
    
   }
  }

  //BUTTON Y
  if (digitalRead(buttonPinY)==HIGH) {
   Ycount++;
   for(int i = 0; i < 10; i++){
    if (digitalRead(buttonPinY)==HIGH) {
      Ycount++;
    }
    delay (200);
    
   if(Ycount >= 3){
    Serial.println("Y"); 
   }
    Ycount=0;
    
   }
  }
  
  
  } //End Loop Method

