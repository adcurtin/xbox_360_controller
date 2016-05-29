

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

const int LT = 2;  //left trigger  ANALOG
const int RT = 3;  //right trigger  ANALOG
const int LV = 4; // left analog stick vertical axis  ANALOG
const int LH = 5; // left analog horizontal axis      ANALOG
const int RV = 6; //right analog stick vertical axis  ANALOG
const int RH = 7; // right analog horizontal axis    ANALOG

void press(int button){
  pinMode(button, OUTPUT);
  digitalWrite(button, HIGH); // send button press for...
  delay(50); // .05 seconds
  digitalWrite(button, LOW);
  delay(400);
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

  
  delay(5000);
  
  digitalWrite(13,LOW); //turn off led to signify startup over

}

void loop(){

 //halo Normal revert
   /*press(start);
   press(A);
   press(lv);
   press(A);
   */
   /*
   //start game
   press(A);
   delay(500);
   press(A);
   delay(13000);//load delay
   presst(LT);
   delay(200);
   press(START);
   delay(1200);
   press(START);
   delay(33000); //load and start delay
   //move to spot and get ribbon
   stick(RH,300,LOW);
   press(A);
   delay(300);
   press(A);
   stick(LH,5000,HIGH);
   delay(200);
   stick(LV,200,LOW);
   delay(200);
   press(Y);
   delay(200);
   
   //exit
   press(START);
   delay(200);
   press(DD);
   delay(200);
   press(DD);
   delay(200);
   press(A);
   delay(400);
   press(A);
   delay(14000);
    */
}