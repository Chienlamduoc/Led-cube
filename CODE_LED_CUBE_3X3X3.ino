// Code led cube 3x3x3 Banlinhkien.com
// Chuc cac ban thanh cong :3

// Khai bao Cot led
int neg1 = 13;  //"neg1" Ket noi voi chan 13 Arduino
int neg2 = 12;  //"neg2" Ket noi voi chan 12 Arduino
int neg3 = 11;  //"neg3" Ket noi voi chan 11 Arduino
int neg4 = 10;  //"neg4" Ket noi voi chan 10 Arduino
int neg5 = 9;   //"neg5" Ket noi voi chan 9 Arduino
int neg6 = 8;   //"neg6" Ket noi voi chan 8 Arduino
int neg7 = 7;   //"neg7" Ket noi voi chan 7 Arduino
int neg8 = 6;   //"neg8" Ket noi voi chan 6 Arduino
int neg9 = 5;   //"neg9" Ket noi voi chan 5 Arduino
// Khai bao Tang Led
int pos1 = 4;   //"pos1" Ket noi voi chan 4 Arduino
int pos2 = 3;   //"pos2" Ket noi voi chan 3 Arduino
int pos3 = 2;   //"pos3" Ket noi voi chan 2 Arduino

int delay_time=100, j=0;

void setup() {                
  // Cau hinh chan dau ra
  pinMode(neg1, OUTPUT);     
  pinMode(neg2, OUTPUT);     
  pinMode(neg3, OUTPUT);     
  pinMode(neg4, OUTPUT);     
  pinMode(neg5, OUTPUT);     
  pinMode(neg6, OUTPUT);     
  pinMode(neg7, OUTPUT);     
  pinMode(neg8, OUTPUT);     
  pinMode(neg9, OUTPUT);  
  pinMode(pos1, OUTPUT);     
  pinMode(pos2, OUTPUT);     
  pinMode(pos3, OUTPUT);     
}
void loop() {
  for(j=0;j<6;j++)
  {
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);

    delay(250);

 digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
    
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
delay(250);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);


    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(250);
   
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);

    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);

delay(250);

 digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);

delay(250);

 digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
delay(250);
    
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);


    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

      digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);

    delay(250);

 digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
    
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
delay(250);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);


    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(250);
   
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);

    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);

delay(250);

 digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);

delay(250);

 digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
delay(250);
    
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);


    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

    digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);

    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

      digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);

    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);









  
     
     
     
     
     
     digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

       digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

      digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    
      digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    delay(delay_time);





     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

       digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

      digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    
      digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);





    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);

    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

       digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

      digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    delay(delay_time);

    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);


    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);




    digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
 digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);

     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    delay(delay_time);
     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
     digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
   
     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
     digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    delay(delay_time);





     digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    delay(delay_time);

    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    delay(delay_time);









     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(250);

      digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
 digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);  

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250); 

    
     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(250);

      digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
 digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);  

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250); 

    
     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(250);

      digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
 digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);  

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250); 

    
     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(250);

      digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
 digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);  

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250); 

    
     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(250);
      digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
 digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);  

     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250); 











     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(250);






     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);






     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);








     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(250);






     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);






     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);








     digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, HIGH);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
    
    digitalWrite(neg1, LOW);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, LOW);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, LOW);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, LOW);
    
    delay(250);
    
    digitalWrite(pos1, LOW);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, LOW);
    digitalWrite(neg3, LOW);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, LOW);
    digitalWrite(neg6, LOW);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, LOW);
    digitalWrite(neg9, LOW);
    
    delay(250);

    digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(250);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(250);

     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(250);
    
     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, LOW);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(250);
    
     digitalWrite(pos1, HIGH);
    digitalWrite(pos2, LOW);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(250);

    digitalWrite(pos1, LOW);
    digitalWrite(pos2, HIGH);
    digitalWrite(pos3, HIGH);
  
    digitalWrite(neg1, HIGH);
    digitalWrite(neg2, HIGH);
    digitalWrite(neg3, HIGH);
    digitalWrite(neg4, HIGH);
    digitalWrite(neg5, HIGH);
    digitalWrite(neg6, HIGH);
    digitalWrite(neg7, HIGH);
    digitalWrite(neg8, HIGH);
    digitalWrite(neg9, HIGH);
    
    delay(250);
    
    

        
  }
}
