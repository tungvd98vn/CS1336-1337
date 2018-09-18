void setup(){
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);

  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);





 }
void loop(){
    int inputA1 = digitalRead(7),
  		inputA2 = digitalRead(6),
 		inputA3 = digitalRead(5),
  		inputB1 = digitalRead(4),
  		inputB2 = digitalRead(3),
  		inputB3 = digitalRead(2);

  	int x = 0, y = 0, z = 0;
    if (inputA3 == 1 && inputB3 == 1) digitalWrite(8,LOW);
  	else if (inputA3 == 0 && inputB3 == 0){
      digitalWrite (8,LOW);
      z++;
    }
  	else
      digitalWrite(8, HIGH);

  	if (inputA2 == 1 && inputB2 == 1){
      if (z) digitalWrite(9, HIGH);
      else digitalWrite(9, LOW);
    }
 	else if (inputA2 == 0 && inputB2 == 0){
      y++;
      if (z) digitalWrite(9, HIGH);
      else digitalWrite(9, LOW);
    }
  	else {
      if (z) {
        digitalWrite(9,LOW);
        y++;
      }
      else digitalWrite(9, HIGH);
    }

    if (inputA1 == 1 && inputB1 == 1){
      if(y) digitalWrite(10, HIGH);
      else digitalWrite(10, LOW);
    }
    else if (inputA1 == 0 && inputB1 == 0){
        x++;
        if (y) digitalWrite(10, HIGH);
        else digitalWrite(10, LOW);
    }
  	else {
      if (y){
        digitalWrite(10, LOW);
        x++;
      }
      else digitalWrite(10, HIGH);
    }

  	if (x) digitalWrite(11, HIGH);
    else digitalWrite(11, LOW);




}



