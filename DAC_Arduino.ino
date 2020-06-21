
uint8_t itr = 0, sin_itr ; //declaring unsigned 8-bit numbers to hold values
void setup() {
  DDRD = B11111111; //configuring all Digital Pins as output pins
  
}

void loop() {
  //For a sin graph
  for(int i = 0; i <= 360; i++){ //iterating from 0 to 360 degrees for all possible values of sin
    sin_itr = ((sin(i * DEG_TO_RAD) + 1) * 255) / 2;  //converting to radians by multiplying i with constant DEG_TO_RAD
    PORTD = sin_itr; 
    delay(5);
  }

  //For a rectangular graph
  //PORTD = 255; //11111111 in binary
  //delay(500);
  //PORTD = 0; //00000000 in binary
  //delay(500); 

  
  //For a triangular graph
  //for(int i = -255; i < 255; i++){
  //PORTD = abs(i);
  //delay(1);
  //}

  //For a sawtooth graph
  //itr %= 255; 
  //delay(1);
  //PORTD = itr; //increasing the value of itr till 255, and then resetting it again
  //delay(1);
  //itr++;

  //For a cosine graph
  //for(int i = 0; i <= 360; i++){ //iterating from 0 to 360 degrees for all possible values of cosine
  //sin_itr = ((cos(i * DEG_TO_RAD) + 1) * 255) / 2;  //converting to radians by multiplying i with constant DEG_TO_RAD
  //PORTD = sin_itr; 
  //delay(5);
  //}

  
  

}
