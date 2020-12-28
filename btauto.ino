int Btdata;
//motor a
const int mP11 = 3;
const int mP12 = 4;
//motor b
const int mP21 = 8;
const int mP22 = 9;
//motor a je snaga a motor b je lijevo desno
void setup() {
  Serial.begin(9600);
  pinMode(mP11,OUTPUT);
  pinMode(mP12,OUTPUT);
  pinMode(mP21,OUTPUT);
  pinMode(mP22,OUTPUT);
  digitalWrite(mP11,LOW);
  digitalWrite(mP12,LOW);
  digitalWrite(mP21,LOW);
  digitalWrite(mP22,LOW);
}
void loop() {
  if(Serial.available()){
    Btdata = Serial.read();
  }
switch(Btdata){
  //naprijed
  case 'F': case 'f':
    digitalWrite(mP11, HIGH);
    digitalWrite(mP12, LOW);
    digitalWrite(mP21, LOW);
    digitalWrite(mP22, LOW);
    break;
   //nazad
   case 'B': case 'b':
      digitalWrite(mP11, LOW);
      digitalWrite(mP12, HIGH);
      digitalWrite(mP21, LOW);
      digitalWrite(mP22, LOW);
      break;
     //lijevo
    case 'L': case 'l':
      digitalWrite(mP11, LOW);
      digitalWrite(mP12, LOW);
      digitalWrite(mP21, LOW);
      digitalWrite(mP22, HIGH);
      break;
     //desno
    case 'R': case 'r':
      digitalWrite(mP11, LOW);
      digitalWrite(mP12, LOW);
      digitalWrite(mP21, HIGH);
      digitalWrite(mP22, LOW);
      break;
      //naprijed lijevo
    case 'G': case 'g':
      digitalWrite(mP11, HIGH);
      digitalWrite(mP12, LOW);
      digitalWrite(mP21, LOW);
      digitalWrite(mP22, HIGH);
      break;
      //naprijed desno
    case 'I': case 'i':
      digitalWrite(mP11, HIGH);
      digitalWrite(mP12, LOW);
      digitalWrite(mP21, HIGH);
      digitalWrite(mP22, LOW);
      break;
      //nazad lijevo
    case 'H': case 'h':
      digitalWrite(mP11, LOW);
      digitalWrite(mP12, HIGH);
      digitalWrite(mP21, LOW);
      digitalWrite(mP22, HIGH);
      break;
      //nazad desno
    case 'J': case 'j':
      digitalWrite(mP11, LOW);
      digitalWrite(mP12, HIGH);
      digitalWrite(mP21, HIGH);
      digitalWrite(mP22, LOW);
      break;
      //stop
    case 'S': case 's':
      digitalWrite(mP11, LOW);
      digitalWrite(mP12, LOW);
      digitalWrite(mP21, LOW);
      digitalWrite(mP22, LOW);
      break;
   
    
      
  
  
}


  
}
