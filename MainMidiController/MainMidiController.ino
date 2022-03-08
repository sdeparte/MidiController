#include <MIDI.h>

const int button1Pin = 13;
const int button2Pin = 12;
const int button3Pin = 11;
const int button4Pin = 10;
const int button5Pin = 9;
const int button6Pin = 8;
const int button7Pin = 7;
const int button8Pin = 6;
const int button9Pin = 5;
const int button10Pin = 4;
const int button11Pin = 3;
const int button12Pin = 2;

int button1State = 0;
int button2State = 0;
int button3State = 0;
int button4State = 0;
int button5State = 0;
int button6State = 0;
int button7State = 0;
int button8State = 0;
int button9State = 0;
int button10State = 0;
int button11State = 0;
int button12State = 0;

int button1LastState = 0;
int button2LastState = 0;
int button3LastState = 0;
int button4LastState = 0;
int button5LastState = 0;
int button6LastState = 0;
int button7LastState = 0;
int button8LastState = 0;
int button9LastState = 0;
int button10LastState = 0;
int button11LastState = 0;
int button12LastState = 0;

MIDI_CREATE_DEFAULT_INSTANCE();

void setup() {
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
  pinMode(button4Pin, INPUT_PULLUP);
  pinMode(button5Pin, INPUT_PULLUP);
  pinMode(button6Pin, INPUT_PULLUP);
  pinMode(button7Pin, INPUT_PULLUP);
  pinMode(button8Pin, INPUT_PULLUP);
  pinMode(button9Pin, INPUT_PULLUP);
  pinMode(button10Pin, INPUT_PULLUP);
  pinMode(button11Pin, INPUT_PULLUP);
  pinMode(button12Pin, INPUT_PULLUP);
  
  Serial.begin(9600);
  Serial.setTimeout(100);
}

void loop() {
  int val = Serial.readString().toInt();
  
  if (val > 0) {
    MIDI.sendNoteOn(val, 127, 1);
    delay(100);
    MIDI.sendNoteOff(val, 0, 1);
  }
  
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);
  button3State = digitalRead(button3Pin);
  button4State = digitalRead(button4Pin);
  button5State = digitalRead(button5Pin);
  button6State = digitalRead(button6Pin);
  button7State = digitalRead(button7Pin);
  button8State = digitalRead(button8Pin);
  button9State = digitalRead(button9Pin);
  button10State = digitalRead(button10Pin);
  button11State = digitalRead(button11Pin);
  button12State = digitalRead(button12Pin);

  if (button1State != button1LastState) {
    if (button1State == LOW) {
      MIDI.sendNoteOn(42, 127, 1);
      delay(100);
      MIDI.sendNoteOff(42, 0, 1);
    }
  }

  if (button2State != button2LastState) {
    if (button2State == LOW) {
      MIDI.sendNoteOn(43, 127, 1);
      delay(100);
      MIDI.sendNoteOff(43, 0, 1);
    }
  }

  if (button3State != button3LastState) {
    if (button3State == LOW) {
      MIDI.sendNoteOn(44, 127, 1);
      delay(100);
      MIDI.sendNoteOff(44, 0, 1);
    }
  }

  if (button4State != button4LastState) {
    if (button4State == LOW) {
      MIDI.sendNoteOn(45, 127, 1);
      delay(100);
      MIDI.sendNoteOff(45, 0, 1);
    }
  }

  if (button5State != button5LastState) {
    if (button5State == LOW) {
      MIDI.sendNoteOn(46, 127, 1);
      delay(100);
      MIDI.sendNoteOff(46, 0, 1);
    }
  }

  if (button6State != button6LastState) {
    if (button6State == LOW) {
      MIDI.sendNoteOn(47, 127, 1);
      delay(100);
      MIDI.sendNoteOff(47, 0, 1);
    }
  }

  if (button7State != button7LastState) {
    if (button7State == LOW) {
      MIDI.sendNoteOn(48, 127, 1);
      delay(100);
      MIDI.sendNoteOff(48, 0, 1);
    }
  }

  if (button8State != button8LastState) {
    if (button8State == LOW) {
      MIDI.sendNoteOn(49, 127, 1);
      delay(100);
      MIDI.sendNoteOff(49, 0, 1);
    }
  }

  if (button9State != button9LastState) {
    if (button9State == LOW) {
      MIDI.sendNoteOn(50, 127, 1);
      delay(100);
      MIDI.sendNoteOff(50, 0, 1);
    }
  }

  if (button10State != button10LastState) {
    if (button10State == LOW) {
      MIDI.sendNoteOn(51, 127, 1);
      delay(100);
      MIDI.sendNoteOff(51, 0, 1);
    }
  }

  if (button11State != button11LastState) {
    if (button11State == LOW) {
      MIDI.sendNoteOn(52, 127, 1);
      delay(100);
      MIDI.sendNoteOff(52, 0, 1);
    }
  }

  if (button12State != button12LastState) {
    if (button12State == LOW) {
      MIDI.sendNoteOn(53, 127, 1);
      delay(100);
      MIDI.sendNoteOff(53, 0, 1);
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
  button9LastState = button9State;
  button10LastState = button10State;
  button11LastState = button11State;
  button12LastState = button12State;
}
