const int button1Pin = 2;
const int button2Pin = 3;
const int button3Pin = 4;
const int button4Pin = 5;
const int button5Pin = 6;
const int button6Pin = 7;
const int button7Pin = 8;
const int button8Pin = 9;

int button1State = 0;
int button2State = 0;
int button3State = 0;
int button4State = 0;
int button5State = 0;
int button6State = 0;
int button7State = 0;
int button8State = 0;

int button1LastState = 0;
int button2LastState = 0;
int button3LastState = 0;
int button4LastState = 0;
int button5LastState = 0;
int button6LastState = 0;
int button7LastState = 0;
int button8LastState = 0;

void setup() {
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
  pinMode(button4Pin, INPUT_PULLUP);
  pinMode(button5Pin, INPUT_PULLUP);
  pinMode(button6Pin, INPUT_PULLUP);
  pinMode(button7Pin, INPUT_PULLUP);
  pinMode(button8Pin, INPUT_PULLUP);
  
  Serial.begin(9600);
}

void loop() {
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);
  button3State = digitalRead(button3Pin);
  button4State = digitalRead(button4Pin);
  button5State = digitalRead(button5Pin);
  button6State = digitalRead(button6Pin);
  button7State = digitalRead(button7Pin);
  button8State = digitalRead(button8Pin);

  if (button1State != button1LastState) {
    if (button1State == LOW) {
      Serial.println("41");
    }
  }

  if (button2State != button2LastState) {
    if (button2State == LOW) {
      Serial.println("40");
    }
  }

  if (button3State != button3LastState) {
    if (button3State == LOW) {
      Serial.println("39");
    }
  }

  if (button4State != button4LastState) {
    if (button4State == LOW) {
      Serial.println("38");
    }
  }

  if (button5State != button5LastState) {
    if (button5State == LOW) {
      Serial.println("37");
    }
  }

  if (button6State != button6LastState) {
    if (button6State == LOW) {
      Serial.println("36");
    }
  }

  if (button7State != button7LastState) {
    if (button7State == LOW) {
      Serial.println("35");
    }
  }

  if (button8State != button8LastState) {
    if (button8State == LOW) {
      Serial.println("34");
    }
  }

  button1LastState = button1State;
  button2LastState = button2State;
  button3LastState = button3State;
  button4LastState = button4State;
  button5LastState = button5State;
  button6LastState = button6State;
  button7LastState = button7State;
  button8LastState = button8State;
}
