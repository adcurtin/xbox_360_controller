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
  delay(10000);*/
  
  
  delay(5000);
  
  digitalWrite(13,LOW); //turn off led to signify startup over
  Serial.begin(9600);
}

void loop(){
  
  Serial.println("start");
  press(A);
  press(DD);
  press(A);
  press(A);
  delay(1200);
  press(A);
  delay(1200);
  press(A);
  press(A);
  press(A);
  delay(17500);
  /*
  press(START);
  press(DD);
  press(A);
  press(A);
  delay(15500);*/
  
  Serial.println("skip cutscene1");
  press(BACK);
  
  stick(LH, 500, LOW);
  stick(LV, 4750, HIGH);
  stick(LH, 10000, LOW);
  //stick(RH, 270, LOW);
  //stick(LV, 8000, HIGH);
  
  delay(15000);
  Serial.println("skip cutscene2");
  press(BACK);
  
  stick(LV, 9000, HIGH);
  press(A);
  delay(400);
  stick(RV, 95, LOW);
  
  for(int i=0;i<10;i++){
     pinMode(RT,OUTPUT);
     digitalWrite(RT,LOW);
     delay(7000);
     pinMode(RT,INPUT);
     delay(200);
     press(RB);
     delay(350);         
     press(RB);
     Serial.print("loop count:" );
     Serial.println(i);
  }
  Serial.println("loop done");
  delay(12000);
  Serial.println("skip cutscene3");
  press(BACK);
  
  delay(28000);
  Serial.println("exit");
  press(START);
  press(DU);
  press(A);
  press(A);
  
  delay(32000);
  
  /*
   delay(500); //whole loop delay time
   
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