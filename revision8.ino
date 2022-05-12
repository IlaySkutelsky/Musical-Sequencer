// Advanced Microcontroller-based Audio Workshop
//
// http://www.pjrc.com/store/audio_tutorial_kit.html
// https://hackaday.io/project/8292-microcontroller-audio-workshop-had-supercon-2015

#include <PeakDetection.h>
#include <Bounce.h>
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <elapsedMillis.h>


// latching buttons initial setup
// this constant won't change:
const int  buttonPin = 33;    // the pin that the pushbutton is attached to
const int ledPin = 13;       // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter = 0;             // counter for the number of button presses
int buttonState = 0;                  // current state of the button
int lastButtonState = 0;              // previous state of the button



// this constant won't change:
const int  mutePin4 = 36;    // the pin that the pushbutton is attached to
const int ledMute4 = 30;       // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter1 = 0;             // counter for the number of button presses
int buttonState1 = 0;                  // current state of the button
int lastButtonState1 = 0;              // previous state of the button



// this constant won't change:
const int  mutePin5 = 35;    // the pin that the pushbutton is attached to
const int ledMute5 = 31;       // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter2 = 0;             // counter for the number of button presses
int buttonState2 = 0;                  // current state of the button
int lastButtonState2 = 0;              // previous state of the button



// this constant won't change:
const int  mutePin3 = 38;    // the pin that the pushbutton is attached to
const int ledMute3 = 28;       // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter3 = 0;             // counter for the number of button presses
int buttonState3 = 0;                  // current state of the button
int lastButtonState3 = 0;              // previous state of the button



// this constant won't change:
const int  mutePin1 = 41;    // the pin that the pushbutton is attached to
const int ledMute1 = 25;       // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter4 = 0;             // counter for the number of button presses
int buttonState4 = 0;                  // current state of the button
int lastButtonState4 = 0;              // previous state of the button



// this constant won't change:
const int  mutePin2 = 12;    // the pin that the pushbutton is attached to
const int ledMute2 = 11;       // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter5 = 0;             // counter for the number of button presses
int buttonState5 = 0;                  // current state of the button
int lastButtonState5 = 0;              // previous state of the button

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Variables will change control pots
//effect variable potentiometer
// initial delaytime value

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// WAV files converted to code by wav2sketch --- Samples on the internal memory
#include "AudioSampleA1.h"
#include "AudioSampleA2.h"
#include "AudioSampleA3.h"
#include "AudioSampleA4.h"
#include "AudioSampleA5.h"

#include "AudioSampleB1.h"
#include "AudioSampleB2.h"
#include "AudioSampleB3.h"
#include "AudioSampleB4.h"
#include "AudioSampleB5.h"

#include "AudioSampleC1.h"
#include "AudioSampleC2.h"
#include "AudioSampleC3.h"
#include "AudioSampleC4.h"
#include "AudioSampleC5.h"

#include "AudioSampleD1.h"
#include "AudioSampleD2.h"
#include "AudioSampleD3.h"
#include "AudioSampleD4.h"
#include "AudioSampleD5.h"

#include "AudioSampleE1.h"
#include "AudioSampleE2.h"
#include "AudioSampleE3.h"
#include "AudioSampleE4.h"
#include "AudioSampleE5.h"

#include "AudioSampleF1.h"
#include "AudioSampleF2.h"
#include "AudioSampleF3.h"
#include "AudioSampleF4.h"
#include "AudioSampleF5.h"

#include "AudioSampleG1.h"
#include "AudioSampleG2.h"
#include "AudioSampleG3.h"
#include "AudioSampleG4.h"
#include "AudioSampleG5.h"

//#include "AudioSampleH1.h"
//#include "AudioSampleH2.h"
//#include "AudioSampleH3.h"
//#include "AudioSampleH4.h"
//#include "AudioSampleH5.h"
// =====================================================================================================================================================================================
// Teensy Library inclusions



// GUItool: begin automatically generated code
AudioPlayMemory          playMem15;      //xy=117.00568389892578,651
AudioPlayMemory          playMem10;      //xy=118.00568389892578,461
AudioPlayMemory          playMem11;      //xy=118.00568389892578,683
AudioPlayMemory          playMem6;       //xy=119.00568389892578,493
AudioPlayMemory          playMem14;      //xy=119.00568389892578,583
AudioPlayMemory          playMem20;      //xy=118.00568389892578,840
AudioPlayMemory          playMem13;      //xy=119.00568389892578,617
AudioPlayMemory          playMem8;       //xy=120.00568389892578,427
AudioPlayMemory          playMem12;      //xy=119.00568389892578,720
AudioPlayMemory          playMem7;       //xy=120.00568389892578,530
AudioPlayMemory          playMem25;      //xy=118.00568389892578,1032
AudioPlayMemory          playMem16;      //xy=119.00568389892578,872
AudioPlayMemory          playMem9;       //xy=121.00568389892578,393
AudioPlayMemory          playMem18;      //xy=120.00568389892578,806
AudioPlayMemory          playMem21;      //xy=119.00568389892578,1065
AudioPlayMemory          playMem17;      //xy=120.00568389892578,909
AudioPlayMemory          playMem23;      //xy=120.00568389892578,998
AudioPlayMemory          playMem19;      //xy=121.00568389892578,772
AudioPlayMemory          playMem22;      //xy=120.00568389892578,1101
AudioPlayMemory          playMem24;      //xy=121.00568389892578,964
AudioPlayMemory          playMem3;       //xy=125.00568389892578,270
AudioPlayMemory          playMem4;       //xy=126.00568389892578,302
AudioPlayMemory          playMem5;       //xy=126.00568389892578,339
AudioPlayMemory          playMem1;       //xy=127.00568389892578,202
AudioPlayMemory          playMem2;       //xy=127.00568389892578,236
AudioMixer4              mixer5;         //xy=315.0056838989258,311
AudioMixer4              mixer4;         //xy=317.0056838989258,240
AudioMixer4              mixer7;         //xy=317.0056838989258,393
AudioMixer4              mixer8;         //xy=317.0056838989258,476
AudioMixer4              mixer2;         //xy=320.0056838989258,106
AudioMixer4              mixer1;         //xy=321.0056838989258,35
AudioMixer4              samplesdry;     //xy=452.0056838989258,55
AudioMixer4              samples_delay;  //xy=472.00567626953125,266
AudioMixer4              samplesverb;    //xy=474.0056838989258,467
AudioEffectDelay         delay1;         //xy=594.0056762695312,266
AudioEffectFreeverb      freeverb1;      //xy=636.0056838989258,467
AudioMixer4              mixerdelay;     //xy=727.0056762695312,241
AudioMixer4              mixersum;       //xy=872.0056762695312,248
AudioOutputI2S           i2s2;           //xy=1023.0056762695312,241
AudioConnection          patchCord1(playMem3, 0, mixer4, 2);
AudioConnection          patchCord2(playMem3, 0, mixer7, 2);
AudioConnection          patchCord3(playMem3, 0, mixer1, 2);
AudioConnection          patchCord4(playMem4, 0, mixer4, 3);
AudioConnection          patchCord5(playMem4, 0, mixer7, 3);
AudioConnection          patchCord6(playMem4, 0, mixer1, 3);
AudioConnection          patchCord7(playMem5, 0, mixer2, 0);
AudioConnection          patchCord8(playMem5, 0, mixer5, 0);
AudioConnection          patchCord9(playMem5, 0, mixer8, 0);
AudioConnection          patchCord10(playMem1, 0, mixer1, 0);
AudioConnection          patchCord11(playMem1, 0, mixer4, 0);
AudioConnection          patchCord12(playMem1, 0, mixer7, 0);
AudioConnection          patchCord13(playMem2, 0, mixer1, 1);
AudioConnection          patchCord14(playMem2, 0, mixer4, 1);
AudioConnection          patchCord15(playMem2, 0, mixer7, 1);
AudioConnection          patchCord16(mixer5, 0, samples_delay, 1);
AudioConnection          patchCord17(mixer4, 0, samples_delay, 0);
AudioConnection          patchCord18(mixer7, 0, samplesverb, 0);
AudioConnection          patchCord19(mixer8, 0, samplesverb, 1);
AudioConnection          patchCord20(mixer2, 0, samplesdry, 1);
AudioConnection          patchCord21(mixer1, 0, samplesdry, 0);
AudioConnection          patchCord22(samplesdry, 0, mixersum, 0);
AudioConnection          patchCord23(samples_delay, delay1);
AudioConnection          patchCord24(samplesverb, freeverb1);
AudioConnection          patchCord25(delay1, 0, mixerdelay, 0);
AudioConnection          patchCord26(delay1, 1, mixerdelay, 1);
AudioConnection          patchCord27(delay1, 2, mixerdelay, 2);
AudioConnection          patchCord28(delay1, 3, mixerdelay, 3);
AudioConnection          patchCord29(freeverb1, 0, mixersum, 2);
AudioConnection          patchCord30(mixerdelay, 0, mixersum, 1);
AudioConnection          patchCord31(mixersum, 0, i2s2, 0);
AudioConnection          patchCord32(mixersum, 0, i2s2, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=384.0056838989258,860

// Bounce 5 sample buttons.
Bounce button0 = Bounce(0, 15);
Bounce button1 = Bounce(1, 15);  // 15 ms debounce time
Bounce button2 = Bounce(2, 15);
Bounce button3 = Bounce(3, 15);
Bounce button4 = Bounce(4, 15);

// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void setup() {
  Serial.begin (9600);
  //Latches
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(mutePin1, INPUT);
  pinMode(ledMute1, OUTPUT);
  pinMode(mutePin2, INPUT);
  pinMode(ledMute2, OUTPUT);
  pinMode(mutePin3, INPUT);
  pinMode(ledMute3, OUTPUT);
  pinMode(mutePin4, INPUT);
  pinMode(ledMute4, OUTPUT);
  pinMode(mutePin5, INPUT);
  pinMode(ledMute5, OUTPUT);

  //Samples
  pinMode(0, INPUT_PULLUP); //sample buttons
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);

  // teensy audio gui tool parameters
  AudioMemory(1024);
  sgtl5000_1.enable();
  sgtl5000_1.volume(1);
  mixer1.gain(0, 0.4);
  mixer1.gain(1, 0.4);
  mixer1.gain(2, 0.4);
  mixer1.gain(3, 0.4);
  mixer2.gain(0, 0.4);
  samplesdry.gain(0, 0.4);
  samplesdry.gain(1, 0.4);
  mixer4.gain(0, 0.4);
  mixer4.gain(1, 0.4);
  mixer4.gain(2, 0.4);
  mixer4.gain(3, 0.4);
  mixer5.gain(0, 0.4);
  samples_delay.gain(0, 0.4);
  samples_delay.gain(1, 0.4);
  mixer7.gain(0, 0.4);
  mixer7.gain(1, 0.4);
  mixer7.gain(2, 0.4);
  mixer7.gain(3, 0.4);
  mixer8.gain(0, 0.4);
  samplesverb.gain(0, 0.4);
  samplesverb.gain(1, 0.4);
  mixerdelay.gain(0, 0.4);
  mixerdelay.gain(1, 0.3);
  mixerdelay.gain(2, 0.2);
  mixerdelay.gain(3, 0.1);
  mixersum.gain(0, 1);
  mixersum.gain(1, 1);
  mixersum.gain(2, 1);
  delay1.delay(0, 200);
  delay1.delay(1, 400);
  delay1.delay(2, 600);
  // delay1.disable(0);
  // delay1.disable(1);
  // delay1.disable(2);
  freeverb1.roomsize(1);
}

void loop() {
  //  Serial.println(ledPin);
  //  float effectPot = (A9);

  buttonState = digitalRead(buttonPin);
  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      buttonPushCounter++;
      //       Serial.println("on");
      //      Serial.println(buttonPushCounter);
      //     } else {
      //       Serial.println("off");
    }
    delay(50);
  }
  lastButtonState = buttonState;


  if (buttonPushCounter % 2 == 0) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }



  {
    buttonState1 = digitalRead(mutePin1);

    // compare the buttonState to its previous state
    if (buttonState1 != lastButtonState1) {
      // if the state has changed, increment the counter
      if (buttonState1 == HIGH) {
        buttonPushCounter1++;
        //      Serial.println("on");
        //      Serial.println(buttonPushCounter1);
        //    } else {
        //     Serial.println("off");
      }
      delay(50);
    }
    lastButtonState1 = buttonState1;


    if (buttonPushCounter1 % 2 == 0) {
      digitalWrite(ledMute1, HIGH);
    } else {
      digitalWrite(ledMute1, LOW);
    }

  }

  {
    // read the pushbutton input pin:
    buttonState2 = digitalRead(mutePin2);

    // compare the buttonState to its previous state
    if (buttonState2 != lastButtonState2) {
      if (buttonState2 == HIGH) {
        buttonPushCounter2++;
        //      Serial.println("on");
        //      Serial.println(buttonPushCounter2);
        //    } else {
        //       Serial.println("off");
      }
      delay(50);
    }
    lastButtonState2 = buttonState2;


    if (buttonPushCounter2 % 2 == 0) {
      digitalWrite(ledMute2, HIGH);
    } else {
      digitalWrite(ledMute2, LOW);
    }

  }

  {
    // read the pushbutton input pin:
    buttonState3 = digitalRead(mutePin3);

    // compare the buttonState to its previous state
    if (buttonState3 != lastButtonState3) {
      if (buttonState3 == HIGH) {
        buttonPushCounter3++;
        //      Serial.println("on");
        //      Serial.println(buttonPushCounter3);
        //    } else {
        //      Serial.println("off");
      }
      delay(50);
    }
    lastButtonState3 = buttonState3;

    if (buttonPushCounter3 % 2 == 0) {
      digitalWrite(ledMute3, HIGH);
    } else {
      digitalWrite(ledMute3, LOW);
    }

  }

  {
    // read the pushbutton input pin:
    buttonState4 = digitalRead(mutePin4);

    // compare the buttonState to its previous state
    if (buttonState4 != lastButtonState4) {
      if (buttonState4 == HIGH) {
        buttonPushCounter4++;
        //      Serial.println("on");
        //      Serial.println(buttonPushCounter4);
        //    } else {
        //      Serial.println("off");
      }
      delay(50);
    }
    lastButtonState4 = buttonState4;

    if (buttonPushCounter4 % 2 == 0) {
      digitalWrite(ledMute4, HIGH);
    } else {
      digitalWrite(ledMute4, LOW);
    }

  }

  {
    // read the pushbutton input pin:
    buttonState5 = digitalRead(mutePin5);

    // compare the buttonState to its previous state
    if (buttonState5 != lastButtonState5) {
      if (buttonState5 == HIGH) {
        buttonPushCounter5++;
        //     Serial.println("on");
        //     Serial.println(buttonPushCounter5);
        //   } else {
        //    Serial.println("off");
      }
      delay(50);
    }
    lastButtonState5 = buttonState5;

    if (buttonPushCounter5 % 2 == 0) {
      digitalWrite(ledMute5, HIGH);
    } else {
      digitalWrite(ledMute5, LOW);
    }

  }
  // Update all the button objects
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();

  // delay effect parameters
  int delaytime = analogRead (A10) / 5;
  delay1.delay(0, delaytime);
  delay1.delay(1, delaytime * 2);
  delay1.delay(2, delaytime * 3);
  delay1.delay(3, delaytime * 4);

  mixerdelay.gain(0, 0.4);
  mixerdelay.gain(1, 0.2);
  mixerdelay.gain(2, 0.1);
  mixerdelay.gain(3, 0.05);

  // reverb effect parameters
  freeverb1.roomsize(analogRead (A10) / 1024.0);

  float wetDrypot1 = analogRead(A8);
  float wetDrypot2 = analogRead(A0);
  float wetDrypot3 = analogRead(A2);
  float wetDrypot4 = analogRead(A1);
  float wetDrypot5 = analogRead(A3);



  //MUTES
  mixer1.gain(0, buttonPushCounter4 % 2);
  mixer1.gain(1, buttonPushCounter2 % 2);
  mixer1.gain(2, buttonPushCounter1 % 2);
  mixer1.gain(3, buttonPushCounter3 % 2);
  mixer2.gain(0, buttonPushCounter5 % 2);

  mixer4.gain(0, buttonPushCounter4 % 2);
  mixer4.gain(1, buttonPushCounter2 % 2);
  mixer4.gain(2, buttonPushCounter1 % 2);
  mixer4.gain(3, buttonPushCounter3 % 2);
  mixer5.gain(0, buttonPushCounter5 % 2);

  mixer7.gain(0, buttonPushCounter4 % 2);
  mixer7.gain(1, buttonPushCounter2 % 2);
  mixer7.gain(2, buttonPushCounter1 % 2);
  mixer7.gain(3, buttonPushCounter3 % 2);
  mixer8.gain(0, buttonPushCounter5 % 2);

  //WETDRY DELAY
  mixer4.gain(0, (wetDrypot1 / 1024.0) * (buttonPushCounter4 % 2));
  mixer4.gain(1, (wetDrypot2 / 1024.0) * (buttonPushCounter2 % 2));
  mixer4.gain(2, (wetDrypot3 / 1024.0) * (buttonPushCounter1 % 2));
  mixer4.gain(3, (wetDrypot4 / 1024.0) * (buttonPushCounter3 % 2));
  mixer5.gain(0, (wetDrypot5 / 1024.0) * (buttonPushCounter5 % 2));
  mixer7.gain(0, (wetDrypot1 / 1024.0) * (buttonPushCounter4 % 2));
  mixer7.gain(1, (wetDrypot2 / 1024.0) * (buttonPushCounter2 % 2));
  mixer7.gain(2, (wetDrypot3 / 1024.0) * (buttonPushCounter1 % 2));
  mixer7.gain(3, (wetDrypot4 / 1024.0) * (buttonPushCounter3 % 2));
  mixer8.gain(0, (wetDrypot5 / 1024.0) * (buttonPushCounter5 % 2));

  // EFFECT SELECT
  int effectSelect = analogRead(A13);
  //Serial.println (analogRead(A13));
  if (effectSelect >= 0 and effectSelect <= 230)
  { mixersum.gain(0, 1);
    mixersum.gain(1, 0);
    mixersum.gain(2, 0);
  }
  else if (effectSelect >= 230 and effectSelect <= 350)
  { mixersum.gain(0, 1);
    mixersum.gain(1, 1);
    mixersum.gain(2, 0);
  }
  else if (effectSelect >= 350 and effectSelect <= 600)
  { mixersum.gain(0, 1);
    mixersum.gain(1, 0);
    mixersum.gain(2, 1);

  }
  // else if (effectSelect >= 500 and effectSelect <= 750)
  //     {  samples_crusher.gain(0, 0.4);
  //        samples_crusher.gain(1, 0.4);}

  if (digitalRead (ledPin) == HIGH)     //play stop
  {


    //change sample with kitSelect

    int kitSelect = analogRead(A12);


    //  Serial.println(kitSelect);
    if (button0.fallingEdge()) {
      if (kitSelect > 1000 and kitSelect < 1030)
      {
        playMem5.play(AudioSampleA1);
      }     if (kitSelect > 450 and kitSelect < 610) {
        playMem5.play(AudioSampleB1);
      }
      if (kitSelect > 300 and kitSelect < 400) {
        playMem5.play(AudioSampleC1);
      }
      if (kitSelect > 230 and kitSelect < 290) {
        playMem5.play(AudioSampleD1);
      }
      if (kitSelect > 180 and kitSelect < 220)
      {
        playMem5.play(AudioSampleE1);
      }    if (kitSelect > 150 and kitSelect < 180)
      {
        playMem5.play(AudioSampleF1);
      }

    }

    if (button1.fallingEdge())  {
      if (kitSelect > 300 and kitSelect < 450)
      {
        playMem1.play(AudioSampleA2);
      }     if (kitSelect > 450 and kitSelect < 610) {
        playMem1.play(AudioSampleB2);
      }     if (kitSelect > 610 and kitSelect < 1000)
      {
        playMem1.play(AudioSampleC2);
      }     if (kitSelect > 1000)
      {
        playMem1.play(AudioSampleD2);
      }
    }


    if (button2.fallingEdge())  {
      if (kitSelect > 300 and kitSelect < 450)
      {
        playMem2.play(AudioSampleA3);
      }     if (kitSelect > 450 and kitSelect < 610) {
        playMem2.play(AudioSampleB3);
      }     if (kitSelect > 610 and kitSelect < 1000)
      {
        playMem2.play(AudioSampleC3);
      }     if (kitSelect > 1000)
      {
        playMem2.play(AudioSampleD3);
      }

    }

    if (button3.fallingEdge())  {
      if (kitSelect > 300 and kitSelect < 450)
      {
        playMem3.play(AudioSampleA4);
      }     if (kitSelect > 450 and kitSelect < 610) {
        playMem3.play(AudioSampleB4);
      }     if (kitSelect > 610 and kitSelect < 1000)
      {
        playMem3.play(AudioSampleC4);
      }     if (kitSelect > 1000)
      {
        playMem3.play(AudioSampleD4);
      }

    }
    if (button4.fallingEdge())  {
      if (kitSelect > 300 and kitSelect < 450)
      {
        playMem4.play(AudioSampleA5);
      }     if (kitSelect > 450 and kitSelect < 610) {
        playMem4.play(AudioSampleB5);
      }     if (kitSelect > 610 and kitSelect < 1000)
      {
        playMem4.play(AudioSampleC5);
      }    if (kitSelect > 1000)
      {
        playMem4.play(AudioSampleD5);
      }

    }
  }
}
