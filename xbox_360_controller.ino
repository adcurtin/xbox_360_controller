const int A = 22; // Button "A" on the controller
const int B = 23;
const int X = 24;
const int Y = 25;
const int START = 26;  // start button
const int GUIDE = 27;  //guide
const int BACK = 28;  //back
const int LB = 29;  //left bumper
const int RB = 30;  //right bumper
const int DU = 31;  //dpad up
const int DD = 32;  //dpad down
const int DL = 33;  //dpad left
const int DR = 34;  //dpad right
const int LSC = 35;  //left stick click
const int RSC = 36;  //right stick click

const int LT = 5;  //left trigger  ANALOG
const int RT = 4;  //right trigger  ANALOG
const int LY = 2; // left analog stick vertical axis  ANALOG
const int LX = 0; // left analog horizontal axis      ANALOG
const int RY = 3; //right analog stick vertical axis  ANALOG
const int RX = 1; // right analog horizontal axis    ANALOG

void press(int button){
  pinMode(button, OUTPUT);
  digitalWrite(button, HIGH); // send button press for...
  delay(50); // .05 seconds
  digitalWrite(button, LOW);
  delay(200);
}



void presst(int trigger){
   pinMode(trigger, OUTPUT);
  digitalWrite(trigger, LOW); // send button press for...
  delay(30); // .05 seconds
  pinMode(trigger, INPUT);
  delay(300);
}

void press2(int button, int duration){
  pinMode(button, OUTPUT);
  digitalWrite(button, HIGH); // send button press for...
  delay(duration); 
  digitalWrite(button, LOW);
  delay(200);
}

void stick(int stick, int duration, int val){
  pinMode(stick, OUTPUT);
  digitalWrite(stick, val);
  delay(duration);
  pinMode(stick, INPUT);
  digitalWrite(stick, LOW); //put back in high Z
  delay(200);
}


void setup(){
  //set up outputs
  int i;
  for(i=2;i<8;i++){ //LT through RH
    pinMode(i, INPUT);
    digitalWrite(i, LOW); //set to high Z
  }  
  for(i=22;i<37;i++){ //A through RSC
    pinMode(i, OUTPUT);
  }
 
  
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH); //light LED to signify startup  
  /*

  delay(5000); //startup delay
  press(START); //start the game
  delay(1200);
  press(START);
  delay(10000);
  */
  digitalWrite(13,LOW); //turn off led to signify startup over
  //Serial.begin(9600);
}

void loop(){
   delay(500); //whole loop delay time
   press(A);
   /*
   pinMode(RT,OUTPUT);
   digitalWrite(RT,LOW);
   delay(200);
   pinMode(RT,INPUT);
   //digitalWrite(RT,LOW);
   delay(200);
   press(RB);
   delay(550); //550 for lancer
                //300 for pistol 
                //1150 to 1350 for retro           
   press(RB);
   delay(200); 
   press(A);
   */
}
