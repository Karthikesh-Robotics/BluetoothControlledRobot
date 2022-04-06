
//L293 Connection
const int motorA1      = 8;
const int motorA2      = 9;

const int motorB1      = 10;
const int motorB2      = 11;
int state;
void setup() {
  // Set pins as outputs:
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);


  Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    state = Serial.read();
  }
  Serial.println(state);

  /***********************Forward****************************/
  //If state is equal with letter 'F', car will go forward!
  if (state == 'F') {
    digitalWrite (motorA1, LOW);
    delay(1);
    digitalWrite(motorA2, HIGH);
    delay(1);

    digitalWrite (motorB1, LOW);
    delay(1);
    digitalWrite(motorB2, HIGH);

  }
  /**********************Forward Left************************/
  //If state is equal with letter 'I', car will go forward left
  else if (state == 'I') {
    digitalWrite (motorA1, LOW);
    delay(1);
    digitalWrite(motorA2, HIGH);
    delay(1);

    digitalWrite (motorB1, LOW);
    delay(1);
    digitalWrite(motorB2, HIGH);


  }
  /**********************Forward Right************************/
  //If state is equal with letter 'G', car will go forward right
  else if (state == 'G') {
    digitalWrite (motorA1, LOW);
    delay(1);
    digitalWrite(motorA2, HIGH);
    delay(1);

    digitalWrite (motorB1, LOW);
    delay(1);
    digitalWrite(motorB2, HIGH);

  }
  /***********************Backward****************************/
  //If state is equal with letter 'B', car will go backward
  else if (state == 'B') {
    digitalWrite (motorA1, HIGH);
    delay(1);
    digitalWrite(motorA2, LOW);
    delay(1);

    digitalWrite (motorB1, HIGH);
    delay(1);
    digitalWrite(motorB2, LOW);

  }
  /**********************Backward Left************************/
  //If state is equal with letter 'J', car will go backward left
  else if (state == 'J') {
    digitalWrite (motorA1, HIGH);
    delay(1);
    digitalWrite(motorA2, LOW);
    delay(1);

    digitalWrite (motorB1, HIGH);
    delay(1);
    digitalWrite(motorB2, LOW);

  }
  /**********************Backward Right************************/
  //If state is equal with letter 'H', car will go backward right
  else if (state == 'H') {
    digitalWrite (motorA1, HIGH);
    delay(1);
    digitalWrite(motorA2, LOW);
    delay(1);

    digitalWrite (motorB1, HIGH);
    delay(1);
    digitalWrite(motorB2, LOW);

  }
  /***************************Left*****************************/
  //If state is equal with letter 'L', wheels will turn left
  else if (state == 'L') {
    digitalWrite (motorA2, HIGH);
    delay(1);
    digitalWrite(motorA1, LOW);
    delay(1);

    digitalWrite (motorB2, LOW);
    delay(1);
    digitalWrite(motorB1, HIGH);

  }
  /***************************Right*****************************/
  //If state is equal with letter 'R', wheels will turn right
  else if (state == 'R') {
    digitalWrite (motorA2, LOW);
    delay(1);
    digitalWrite(motorA1, HIGH);
    delay(1);

    digitalWrite (motorB2, HIGH);
    delay(1);
    digitalWrite(motorB1, LOW);

  }

  /************************Stop*****************************/
  //If state is equal with letter 'S', stop the car
  else if (state == 'S') {
    analogWrite(motorA1, 0);  analogWrite(motorA2, 0);
    analogWrite(motorB1, 0);  analogWrite(motorB2, 0);
  }


}
