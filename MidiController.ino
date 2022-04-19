#include <MIDI.h>

// Columns settings
int columnPins[] = {2, 3, 4, 5};
int columnPinsCount = 4;

// Rows settings
int rowPins[] = {8, 9, 10, 11, 12, 13};
int rowPinsCount = 6;

// Array for the last known switch states [columnPinsCount][rowPinsCount]
int previousStates[4][6] = {0};

// Notes to to send for each button
uint8_t buttonMidiNotes[4][6] = {
  {10, 20, 30, 40, 50, 60},
  {11, 21, 31, 41, 51, 61},
  {12, 22, 32, 42, 52, 62},
  {13, 23, 33, 43, 53, 63}
};

MIDI_CREATE_DEFAULT_INSTANCE();

void setup()
{
  MIDI.begin(MIDI_CHANNEL_OMNI);

  for(int columnPin = 0; columnPin < columnPinsCount; columnPin++)
  {
    pinMode(columnPins[columnPin], OUTPUT);
    digitalWrite(columnPins[columnPin], HIGH);
  }

  for(int rowPin = 0; rowPin < rowPinsCount; rowPin++)
  {
    pinMode(rowPins[rowPin], INPUT);
    digitalWrite(rowPins[rowPin], HIGH);
  }
} 

void loop()
{
  // Loop through the columns
  for(int columnPin = 0; columnPin < columnPinsCount; columnPin++)
  {
    digitalWrite(columnPins[columnPin], LOW);

    // Loop through the rows
    for (int rowPin = 0; rowPin < rowPinsCount; rowPin++) {
      //Check if each switch is pressed
      if (digitalRead(rowPins[rowPin]) == LOW) {
        // Check to see if the state has changed since last time
        if (previousStates[columnPin][rowPin] == 0) {
          // Send : Midi note ON
          MIDI.sendNoteOn(buttonMidiNotes[columnPin][rowPin], 127, 1);

          // Update last known state of this button
          previousStates[columnPin][rowPin] = 1;
        }
      } else {
        // Check to see if the state has changed since last time
        if (previousStates[columnPin][rowPin] == 1) {
          // Send : Midi note OFF
          MIDI.sendNoteOn(buttonMidiNotes[columnPin][rowPin], 0, 1);

          // Update last known state of this button
          previousStates[columnPin][rowPin] = 0;
        }
      }
    }

    digitalWrite(columnPins[columnPin], HIGH);
  }
}
