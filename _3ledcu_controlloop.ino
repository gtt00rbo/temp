int rosuPin=3; //digital pin pt rosu
int bluePin=2; //digital pin pt blue
int rosuOnTime;// on time
int rosuOffTime;//off time
int redOnTime=1000;
int redOffTime=100;

int blueOnTime;//blue on time
int blueOffTime;//blue off timw
int greenOnTime;
int greenOffTime;
int greenBlink;
int numRosuBlink;//variabila pt rosu
int numBlueBlink;//variabil pt blue
String mesajRosu="LED ROSU";
String mesajBlue="LED BLUE";
int redPin= 6;
int greenPin=10;
int blueaPin=11;
int brightRed= 200;
int brightGreen= 50;
int brightBluea= 10;
int analogPin = A1;


void setup() {
  
  Serial.begin(115200);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(blueaPin, OUTPUT);
  // put your setup code here, t
  //declaram output
  pinMode(rosuPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.println(" ");
    Serial.println("  How many times for RED?");//intreba de cate ori rosu
  while (Serial.available()==0) {}//in timp ce input e 0,asteapta
  numRosuBlink = Serial.parseInt();
  Serial.println("  How long for RED?");//intreba de cate ori rosu
  while (Serial.available()==0) {}//in timp ce input e 0,asteapta
  rosuOnTime = Serial.parseInt();
  Serial.println("  How SHORT for RED?");//intreba de cate ori rosu
  while (Serial.available()==0) {}//in timp ce input e 0,asteapta
  rosuOffTime = Serial.parseInt();//trimite citirea in variabila numRosuBlink

  Serial.println(" ");

  Serial.println("  How many times for BLUE?");
  while (Serial.available()==0) {}
  numBlueBlink = Serial.parseInt();
  Serial.println("  How long for BLUE ?");//intreba de cate ori rosu
  while (Serial.available()==0) {}//in timp ce input e 0,asteapta
  blueOnTime = Serial.parseInt();
  Serial.println("  How SHORT for BLUE ?");//intreba de cate ori rosu
  while (Serial.available()==0) {}//in timp ce input e 0,asteapta
  blueOffTime = Serial.parseInt();
}

void loop() {
  //temp
 
  int analogValue;
  float temperature;
  analogValue = analogRead(analogPin);
  temperature = float(analogValue)/1023;
  temperature = temperature*500;
  Serial.println(analogValue);
  Serial.print("     TEMP ");
  Serial.println(" ");
  Serial.print(temperature);
  Serial.println(" Celsius ");
  delay(1000);
   int tempR;
  tempR=analogValue*3;

  
  
  
  //Rosu
  Serial.println(" ");
  Serial.println("    Rosu Clipeste");
  Serial.println(" ");
  if(int r=1);{
  Serial.print( "   Rosu a clipit ");
  Serial.println("prima oara"); 
    
  } 
  for(int r=2; r<=numRosuBlink; r=r+1){ 
  Serial.print("   Rosu a clipit a ");  
  Serial.print(r);
  Serial.print("-a data"); 
  Serial.println(" "); 
  
  digitalWrite(rosuPin, HIGH);
  delay(rosuOnTime);
  digitalWrite(rosuPin, LOW);
  delay(rosuOffTime);
  while(r==numRosuBlink){
    Serial.print( "   Rosu a clipit ");
    Serial.println(" ultima oara");
  digitalWrite(rosuPin, HIGH);
  delay(rosuOnTime);
  digitalWrite(rosuPin, LOW);
  delay(rosuOffTime);
  
  analogWrite(redPin, tempR);
  delay(redOnTime);
  analogWrite(redPin, 0);
  delay(redOffTime);
  analogWrite(greenPin, analogValue);
  analogWrite(blueaPin, brightBluea);
  
  r=r+1;
 
   
  }
  //Albastru
  }
  Serial.println(" ");
  Serial.println("    Blue Clipeste");
  Serial.println(" ");
  if(int b=1);{
  Serial.print( "   Blue a clipit ");
  Serial.println("prima oara"); 
    
  } 
  
  for(int b=2; b<=numBlueBlink; b=b+1){
   //else( b>=2); {
  Serial.print( "   Blue a clipit ");
  Serial.print(b);
  Serial.print("-a oara");
  Serial.println(" ");
  digitalWrite(bluePin, HIGH);
  delay(blueOnTime);
  digitalWrite(bluePin, LOW);
  delay(blueOffTime);
   if(b==numBlueBlink){
     digitalWrite(bluePin, HIGH);
  delay(blueOnTime);
  digitalWrite(bluePin, LOW);
  delay(blueOffTime);
    Serial.print( "   Blue a clipit ");
    Serial.println(" ultima oara");
    
   
  
  }
  }
  
  }
  
  // put your main code here, to run repeatedly:


