// Advanced Microcontroller-based Audio Workshop
//
// http://www.pjrc.com/store/audio_tutorial_kit.html
// https://hackaday.io/project/8292-microcontroller-audio-workshop-had-supercon-2015

// latching buttons initial setup
// this constant won't change:
const int buttonPin = 33;    // the pin that the pushbutton is attached to
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



// this constant won't change:
const int recordPin = 37;    // the pin that the pushbutton is attached to
const int ledRecord = 29;       // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter6 = -1;             // counter for the number of button presses
int buttonState6 = 0;                  // current state of the button
int lastButtonState6 = 1;              // previous state of the button


// this constant won't change:
const int samplePin1 = 9;    // the pin that the pushbutton is attached to
const int ledSample1 = 10;       // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter7 = -1;             // counter for the number of button presses
int buttonState7 = 0;                  // current state of the button
int lastButtonState7 = 1;              // previous state of the button


// this constant won't change:
const int samplePin2 = 39;    // the pin that the pushbutton is attached to
const int ledSample2 = 27;       // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter8 = -1;             // counter for the number of button presses
int buttonState8 = 0;                  // current state of the button
int lastButtonState8 = 1;              // previous state of the button


// this constant won't change:
const int samplePin3 = 40;    // the pin that the pushbutton is attached to
const int ledSample3 = 5;       // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter9 = -1;             // counter for the number of button presses
int buttonState9 = 0;                  // current state of the button
int lastButtonState9 = 1;              // previous state of the button


// this constant won't change:
const int samplePin4 = 34;    // the pin that the pushbutton is attached to
const int ledSample4 = 32;       // the pin that the LED is attached to

// Variables will change:
int buttonPushCounter10 = -1;             // counter for the number of button presses
int buttonState10 = 0;                  // current state of the button
int lastButtonState10 = 1;              // previous state of the button


// this constant won't change:
//const int samplePin5 = 37;    // the pin that the pushbutton is attached to
//const int ledSample5 = 29;       // the pin that the LED is attached to
//
//// Variables will change:
//int buttonPushCounter11 = 0;             // counter for the number of button presses
//int buttonState11 = 0;                  // current state of the button
//int lastButtonState11 = 0;              // previous state of the button


//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// Variables will change control pots
//effect variable potentiometer
// initial delaytime value


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

// WAV files converted to code by wav2sketch --- Samples on the internal memory
//#include "AudioSampleA1.h"
//#include "AudioSampleA2.h"
//#include "AudioSampleA3.h"
//#include "AudioSampleA4.h"
//#include "AudioSampleA5.h"

const char AudioSampleA1[12] = "kits/a1.wav";
const char AudioSampleA2[12] = "kits/a2.wav";
const char AudioSampleA3[12] = "kits/a3.wav";
const char AudioSampleA4[12] = "kits/a4.wav";
const char AudioSampleA5[12] = "kits/a5.wav";


//#include "AudioSampleB1.h"
//#include "AudioSampleB2.h"
//#include "AudioSampleB3.h"
//#include "AudioSampleB4.h"23
//#include "AudioSampleB5.h"

const char AudioSampleB1[12] = "kits/b1.wav";
const char AudioSampleB2[12] = "kits/b2.wav";
const char AudioSampleB3[12] = "kits/b3.wav";
const char AudioSampleB4[12] = "kits/b4.wav";
const char AudioSampleB5[12] = "kits/b5.wav";


//#include "AudioSampleC1.h"
//#include "AudioSampleC2.h"
//#include "AudioSampleC3.h"
//#include "AudioSampleC4.h"
//#include "AudioSampleC5.h"

const char AudioSampleC1[12] = "kits/c1.wav";
const char AudioSampleC2[12] = "kits/c2.wav";
const char AudioSampleC3[12] = "kits/c3.wav";
const char AudioSampleC4[12] = "kits/c4.wav";
const char AudioSampleC5[12] = "kits/c5.wav";


//#include "AudioSampleD1.h"
//#include "AudioSampleD2.h"
//#include "AudioSampleD3.h"
//#include "AudioSampleD4.h"
//#include "AudioSampleD5.h"

const char AudioSampleD1[12] = "kits/d1.wav";
const char AudioSampleD2[12] = "kits/d2.wav";
const char AudioSampleD3[12] = "kits/d3.wav";
const char AudioSampleD4[12] = "kits/d4.wav";
const char AudioSampleD5[12] = "kits/d5.wav";

//#include "AudioSampleE1.h"
//#include "AudioSampleE2.h"
//#include "AudioSampleE3.h"
//#include "AudioSampleE4.h"
//#include "AudioSampleE5.h"

const char AudioSampleE1[12] = "kits/e1.wav";
const char AudioSampleE2[12] = "kits/e2.wav";
const char AudioSampleE3[12] = "kits/e3.wav";
const char AudioSampleE4[12] = "kits/e4.wav";
const char AudioSampleE5[12] = "kits/e5.wav";


//#include "AudioSampleF1.h"
//#include "AudioSampleF2.h"
//#include "AudioSampleF3.h"
//#include "AudioSampleF4.h"
//#include "AudioSampleF5.h"

const char AudioSampleF1[12] = "kits/f1.wav";
const char AudioSampleF2[12] = "kits/f2.wav";
const char AudioSampleF3[12] = "kits/f3.wav";
const char AudioSampleF4[12] = "kits/f4.wav";
const char AudioSampleF5[12] = "kits/f5.wav";


//#include "AudioSampleG1.h"
//#include "AudioSampleG2.h"
//#include "AudioSampleG3.h"
//#include "AudioSampleG4.h"
//#include "AudioSampleG5.h"

const char AudioSampleG1[12] = "kits/g1.wav";
const char AudioSampleG2[12] = "kits/g2.wav";
const char AudioSampleG3[12] = "kits/g3.wav";
const char AudioSampleG4[12] = "kits/g4.wav";
const char AudioSampleG5[12] = "kits/g5.wav";

//#include "AudioSampleH1.h"
//#include "AudioSampleH2.h"
//#include "AudioSampleH3.h"
//#include "AudioSampleH4.h"
//#include "AudioSampleH5.h"

const char AudioSampleH1[12] = "kits/h1.wav";
const char AudioSampleH2[12] = "kits/h2.wav";
const char AudioSampleH3[12] = "kits/h3.wav";
const char AudioSampleH4[12] = "kits/h4.wav";
const char AudioSampleH5[12] = "kits/h5.wav";

// =====================================================================================================================================================================================
// Teensy Library inclusions

#include <PeakDetection.h>
#include <Bounce.h>
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include <elapsedMillis.h>

// GUItool: begin automatically generated code
AudioPlaySdWav           playSdWav4;     //xy=147.7777328491211,305.55554580688477
AudioPlaySdWav           playSdWav3;     //xy=148.88886642456055,251.111083984375
AudioPlaySdWav           playSdWav5;     //xy=149.99999237060547,392.2221984863281
AudioPlaySdWav           playSdWav1;     //xy=161.11107635498047,101.11111068725586
AudioPlaySdWav           playSdWav2;     //xy=161.11109924316406,183.33330917358398
AudioPlaySdRaw           playRaw1;       //xy=162,466
AudioPlaySdRaw           playRaw2;       //xy=163,528
AudioPlaySdRaw           playRaw3;       //xy=163,594
AudioPlaySdRaw           playRaw4;       //xy=166,660
AudioPlaySdRaw           playRaw5;       //xy=168,717
AudioMixer4              mixer5;         //xy=419,403
AudioMixer4              mixer4;         //xy=421,332
AudioMixer4              mixer6;         //xy=421,470
AudioMixer4              mixer3;         //xy=423,267
AudioMixer4              mixer2;         //xy=424,198
AudioMixer4              mixer1;         //xy=425,127
AudioMixer4              mixer7;         //xy=424.11105728149414,541.9999694824219
AudioMixer4              mixer8;         //xy=433,625
AudioMixer4              mixer9;         //xy=433,701
AudioInputI2S            i2s2;           //xy=435,814
AudioMixer4              samplesdry;     //xy=574,147
AudioMixer4              samples_delay;  //xy=583,356
AudioMixer4              samplesverb;    //xy=590,616
AudioAnalyzePeak         peak1;          //xy=598,831
AudioRecordQueue         queue1;         //xy=602,788
AudioEffectDelay         delay1;         //xy=730,356
AudioEffectFreeverb      freeverb1;      //xy=752,616
AudioMixer4              mixerdelay;     //xy=863,331
AudioMixer4              mixersum;       //xy=1172,338
AudioOutputI2S           i2s1;           //xy=1323,331
AudioConnection          patchCord1(playSdWav4, 0, mixer1, 3);
AudioConnection          patchCord2(playSdWav4, 0, mixer4, 3);
AudioConnection          patchCord3(playSdWav4, 0, mixer7, 3);
AudioConnection          patchCord4(playSdWav3, 0, mixer1, 2);
AudioConnection          patchCord5(playSdWav3, 0, mixer4, 2);
AudioConnection          patchCord6(playSdWav3, 0, mixer7, 2);
AudioConnection          patchCord7(playSdWav5, 0, mixer2, 0);
AudioConnection          patchCord8(playSdWav5, 0, mixer5, 0);
AudioConnection          patchCord9(playSdWav5, 0, mixer8, 0);
AudioConnection          patchCord10(playSdWav1, 0, mixer1, 0);
AudioConnection          patchCord11(playSdWav1, 0, mixer4, 0);
AudioConnection          patchCord12(playSdWav1, 0, mixer7, 0);
AudioConnection          patchCord13(playSdWav2, 0, mixer1, 1);
AudioConnection          patchCord14(playSdWav2, 0, mixer4, 1);
AudioConnection          patchCord15(playSdWav2, 0, mixer7, 1);
AudioConnection          patchCord16(playRaw1, 0, mixer2, 1);
AudioConnection          patchCord17(playRaw1, 0, mixer5, 1);
AudioConnection          patchCord18(playRaw1, 0, mixer8, 1);
AudioConnection          patchCord19(playRaw2, 0, mixer2, 2);
AudioConnection          patchCord20(playRaw2, 0, mixer5, 2);
AudioConnection          patchCord21(playRaw2, 0, mixer8, 2);
AudioConnection          patchCord22(playRaw3, 0, mixer2, 3);
AudioConnection          patchCord23(playRaw3, 0, mixer5, 3);
AudioConnection          patchCord24(playRaw3, 0, mixer8, 3);
AudioConnection          patchCord25(playRaw4, 0, mixer3, 0);
AudioConnection          patchCord26(playRaw4, 0, mixer6, 0);
AudioConnection          patchCord27(playRaw4, 0, mixer9, 0);
AudioConnection          patchCord28(playRaw5, 0, mixer3, 1);
AudioConnection          patchCord29(playRaw5, 0, mixer6, 1);
AudioConnection          patchCord30(playRaw5, 0, mixer9, 1);
AudioConnection          patchCord31(mixer5, 0, samples_delay, 1);
AudioConnection          patchCord32(mixer4, 0, samples_delay, 0);
AudioConnection          patchCord33(mixer6, 0, samples_delay, 2);
AudioConnection          patchCord34(mixer3, 0, samplesdry, 2);
AudioConnection          patchCord35(mixer2, 0, samplesdry, 1);
AudioConnection          patchCord36(mixer1, 0, samplesdry, 0);
AudioConnection          patchCord37(mixer7, 0, samplesverb, 0);
AudioConnection          patchCord38(mixer8, 0, samplesverb, 1);
AudioConnection          patchCord39(mixer9, 0, samplesverb, 2);
AudioConnection          patchCord40(i2s2, 0, queue1, 0);
AudioConnection          patchCord41(i2s2, 0, peak1, 0);
AudioConnection          patchCord42(samplesdry, 0, mixersum, 0);
AudioConnection          patchCord43(samples_delay, delay1);
AudioConnection          patchCord44(samplesverb, freeverb1);
AudioConnection          patchCord45(delay1, 0, mixerdelay, 0);
AudioConnection          patchCord46(delay1, 1, mixerdelay, 1);
AudioConnection          patchCord47(delay1, 2, mixerdelay, 2);
AudioConnection          patchCord48(delay1, 3, mixerdelay, 3);
AudioConnection          patchCord49(freeverb1, 0, mixersum, 2);
AudioConnection          patchCord50(mixerdelay, 0, mixersum, 1);
AudioConnection          patchCord51(mixersum, 0, i2s1, 0);
AudioConnection          patchCord52(mixersum, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=439,884
// GUItool: end automatically generated code



// Bounce 5 sample buttons.
Bounce button0 = Bounce(0, 15);
Bounce button1 = Bounce(1, 15);  // 15 ms debounce time
Bounce button2 = Bounce(2, 15);
Bounce button3 = Bounce(3, 15);
Bounce button4 = Bounce(4, 15);



char* getFileNameFromIndex(int index) {
  if (index == 0) {
    return (char*)"RECORD1.RAW";
  } else   if (index == 1) {
    return (char*)"RECORD2.RAW";
  } else   if (index == 2) {
    return (char*)"RECORD3.RAW";
  } else   if (index == 3) {
    return (char*)"RECORD4.RAW";
  } else   if (index == 4) {
    return (char*)"RECORD5.RAW";
  } else   if (index == 5) {
    return (char*)"RECORD6.RAW";
  }
  return (char*)"RECORD7.RAW";
}


class Recorder {
  public:
    // The file where data is recorded
    PeakDetection *peakDetection = new PeakDetection(); // create PeakDetection object

    File frec;
    int mode; // 0=stopped, 1=recording, 2=assigning, 3=playing
    bool detectedPeak;
    bool startedRecording;

    elapsedMillis preRecordingDelayMillis;
    elapsedMillis recordingMillis;
    elapsedMillis peakDetectionMillis;
    int recordsIndex;

    unsigned int peakSamplingInterval;
    unsigned int preRecordingDelay;
    unsigned int recordingMaxTime;

    Recorder() {
      this->mode = 0;
      this->detectedPeak = false;
      this->startedRecording = false;
      
      this->preRecordingDelayMillis = 0;
      this->recordingMillis = 0;
      this->peakDetectionMillis = 0;
      this->recordsIndex = 0;

      this->peakSamplingInterval = 30;
      this->preRecordingDelay = 400;
      this->recordingMaxTime = 1000;
    }

    void startRecording() {
//      Serial.println("@@@@ 0");
      digitalWrite(ledPin, LOW);
      delay(1000);
//      stopPlayingRecording();/
//
//      Serial.print("startRecording file ");
//      Serial.println(this->recordsIndex + 1);

      char* fileName = getFileNameFromIndex(this->recordsIndex);

      //Serial.println("@@@@ 0.1");

      if (SD.exists(fileName)) {
        //Serial.println("@@@@ 0.2");
        SD.remove(fileName);
      }
      delay(10);
      //Serial.println("@@@@ 0.3");
      this->frec = SD.open(fileName, FILE_WRITE);
      //Serial.println("@@@@ 0.4");
      if (this->frec) {
        //    queue1.begin();
        this->mode = 1;
        //Serial.println("@@@@ 0.5");
      } else {
        
      }

      this->preRecordingDelayMillis = 0;
      this->recordingMillis = 0;
    }

    void continueRecording() {
      //      Serial.print(this->preRecordingDelayMillis);
      //      Serial.print(", ");
      //      Serial.print(this->recordingMillis);
      //      Serial.print(", ");
      //      Serial.println(this->detectedPeak); 
      if (this->preRecordingDelayMillis < this->preRecordingDelay) {
        //Serial.println("@@@@ 1.1");
        this->gatherAudioDataForPeak();
        this->recordingMillis = 0;
        return;
      }
      if (!this->startedRecording) this->checkForPeak();
      if (this->detectedPeak == false) {
        //Serial.println("@@@@ 1.2");
        digitalWrite(ledRecord, ((millis() % 600) > 300));
        this->recordingMillis = 0;
        return;
      }
      if (!this->startedRecording) {
        //Serial.println("@@@@ 1.3");
        this->startedRecording = true;
        //Serial.println("NOW RECORDING FR");
        queue1.begin();
      }
      //Serial.println("@@@@ 1.4");
      digitalWrite(ledRecord, HIGH);
      if (queue1.available() >= 2) {
        byte buffer[512];
        // Fetch 2 blocks from the audio library and copy
        // into a 512 byte buffer.  The Arduino SD library
        // is most efficient when full 512 byte sector size
        // writes are used.
        memcpy(buffer, queue1.readBuffer(), 256);
        queue1.freeBuffer();
        memcpy(buffer + 256, queue1.readBuffer(), 256);
        queue1.freeBuffer();
        // write all 512 bytes to the SD card
        //elapsedMicros usec = 0;
        this->frec.write(buffer, 512);
        // Uncomment these lines to see how long SD writes
        // are taking.  A pair of audio blocks arrives every
        // 5802 microseconds, so hopefully most of the writes
        // take well under 5802 us.  Some will take more, as
        // the SD library also must write to the FAT tables
        // and the SD card controller manages media erase and
        // wear leveling.  The queue1 object can buffer
        // approximately 301700 us of audio, to allow time
        // for occasional high SD card latency, as long as
        // the average write time is under 5802 us.
        //Serial.print("SD write, us=");
        //Serial.println(usec);
      }
      if (this->recordingMillis > this->recordingMaxTime) {
        //Serial.println("@@@@ 1.5");
        this->stopRecording();
      }
    }

    void stopRecording() {
      //Serial.println("@@@@ 2");
      //Serial.println("stopRecording");
      digitalWrite(ledRecord, LOW);
      queue1.end();
      //Serial.println("@@@@ 2.1");
      while (queue1.available() > 0) {
        //Serial.println("@@@@ 2.2");
        this->frec.write((byte*)queue1.readBuffer(), 256);
        queue1.freeBuffer();
      }
      //Serial.println("@@@@ 2.3");
      this->frec.close();
      //Serial.println("@@@@ 2.4");      
      this->mode = 2;
      this->detectedPeak = false;
      this->startedRecording = false;
      delete this->peakDetection;
      this->peakDetection = new PeakDetection(); // create PeakDetection object
      this->peakDetection->begin(24, 4, 0.9); //lag, threshold, influence
    }

    void checkForPeak() {
      if (peak1.available() && this->peakDetectionMillis > this->peakSamplingInterval) {
        this->peakDetectionMillis = 0;
        float number = peak1.read();
        this->peakDetection->add(number);
        double peakD = this->peakDetection->getPeak();
        if (this->preRecordingDelayMillis > this->preRecordingDelay && !this->detectedPeak && peakD == 1.00) {
          //Serial.println("PEAK!!");
          this->detectedPeak = true;
        }
        //        this->printBars(number, peakD);
      }
    }

    void gatherAudioDataForPeak() {
      if (peak1.available() && this->peakDetectionMillis > this->peakSamplingInterval) {
        this->peakDetectionMillis = 0;
        float number = peak1.read();
        this->peakDetection->add(number);
      }
    }


    //    void printBars(float number, double peakD) {
    //      int peak = number * 30.0;
    //      int count;
    //      for (count=0; count < 30-peak; count++) {
    //        Serial.print(" ");
    //      }
    //      while (count++ < 30) {
    //        Serial.print("<");
    //      }
    //      Serial.print("||");
    //      for (count=0; count < peak; count++) {
    //        Serial.print(">");
    //      }
    //      while (count++ < 30) {
    //        Serial.print(" ");
    //      }
    //      Serial.print(number);
    //      Serial.print(", ");
    //      Serial.println(peakD);
    //    }
};


// which input on the audio shield will be used?
//const int myInput = AUDIO_INPUT_LINEIN;
const int myInput = AUDIO_INPUT_MIC;

//// Use these with the Teensy Audio Shield
//#define SDCARD_CS_PIN    10
//#define SDCARD_MOSI_PIN  7
//#define SDCARD_SCK_PIN   14

// Use these with the Teensy 3.5 & 3.6 SD card
#define SDCARD_CS_PIN    BUILTIN_SDCARD
#define SDCARD_MOSI_PIN  11  // not actually used
#define SDCARD_SCK_PIN   13  // not actually used

// Use these for the SD+Wiz820 or other adaptors
//#define SDCARD_CS_PIN    4
//#define SDCARD_MOSI_PIN  11
//#define SDCARD_SCK_PIN   13

Recorder recorder = Recorder();
bool isPlaying = true;

int assignedSamples[5] = { -1, -1, -1, -1, -1 };
bool channelsSampleMode[5] = { false, false, false, false, false };
AudioPlaySdRaw rawPlayers[5] = { playRaw1, playRaw2, playRaw3, playRaw4, playRaw5 };

void startPlayingRecording1() {
  if (playRaw1.isPlaying()) playRaw1.stop();
  //Serial.print("startPlaying file ");
  int fileIndex = assignedSamples[0];
  //Serial.println(fileIndex);
  playRaw1.play(getFileNameFromIndex(fileIndex));
  recorder.mode = 3;
}

void startPlayingRecording2() {
  if (playRaw2.isPlaying()) playRaw2.stop();
  //Serial.print("startPlaying file ");
  int fileIndex = assignedSamples[1];
  //Serial.println(fileIndex);
  playRaw2.play(getFileNameFromIndex(fileIndex));
  recorder.mode = 3;
}

void startPlayingRecording3() {
  if (playRaw3.isPlaying()) playRaw3.stop();
  //Serial.print("startPlaying file ");
  int fileIndex = assignedSamples[2];
  //Serial.println(fileIndex);
  playRaw3.play(getFileNameFromIndex(fileIndex));
  recorder.mode = 3;
}

void startPlayingRecording4() {
  if (playRaw4.isPlaying()) playRaw4.stop();
  //Serial.print("startPlaying file ");
  int fileIndex = assignedSamples[3];
  //Serial.println(fileIndex);
  playRaw4.play(getFileNameFromIndex(fileIndex));
  recorder.mode = 3;
}

void startPlayingRecording5() {
  if (playRaw5.isPlaying()) playRaw5.stop();
  //Serial.print("startPlaying file ");
  int fileIndex = assignedSamples[4];
  //Serial.println(fileIndex);
  playRaw5.play(getFileNameFromIndex(fileIndex));
  recorder.mode = 3;
}


// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void setup() {
  Serial.begin(9600);
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
  pinMode(recordPin, INPUT);
  pinMode(ledRecord, OUTPUT);
  pinMode(samplePin1, INPUT);
  pinMode(ledSample1, OUTPUT);
  pinMode(samplePin2, INPUT);
  pinMode(ledSample2, OUTPUT);
  pinMode(samplePin3, INPUT);
  pinMode(ledSample3, OUTPUT);
  pinMode(samplePin4, INPUT);
  pinMode(ledSample4, OUTPUT);
  //  pinMode(samplePin5, INPUT);
  //  pinMode(ledSample5, OUTPUT);

  //Samples
  pinMode(0, INPUT_PULLUP); //sample buttons
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);

  // teensy audio gui tool parameters
  AudioMemory(512);
  sgtl5000_1.enable();
  sgtl5000_1.volume(1);
  sgtl5000_1.inputSelect(myInput);
  sgtl5000_1.lineInLevel(0);
  sgtl5000_1.micGain(32);
  recorder.peakDetection->begin(24, 4, 0.9); //lag, threshold, influence
  mixer1.gain(0, 0.4);
  mixer1.gain(1, 0.4);
  mixer1.gain(2, 0.4);
  mixer1.gain(3, 0.4);
  mixer2.gain(0, 0.4);
  mixer2.gain(1, 0.4);
  mixer2.gain(2, 0.4);
  mixer2.gain(3, 0.4);
  mixer3.gain(0, 0.4);
  mixer3.gain(1, 0.4);
  samplesdry.gain(0, 0.4);
  samplesdry.gain(1, 0.4);
  samplesdry.gain(2, 0.4);
  mixer4.gain(0, 0.4);
  mixer4.gain(1, 0.4);
  mixer4.gain(2, 0.4);
  mixer4.gain(3, 0.4);
  mixer5.gain(0, 0.4);
  mixer5.gain(1, 0.4);
  mixer5.gain(2, 0.4);
  mixer5.gain(3, 0.4);
  mixer6.gain(0, 0.4);
  mixer6.gain(1, 0.4);
  samples_delay.gain(0, 0.4);
  samples_delay.gain(1, 0.4);
  samples_delay.gain(2, 0.4);
  mixer7.gain(0, 0.4);
  mixer7.gain(1, 0.4);
  mixer7.gain(2, 0.4);
  mixer7.gain(3, 0.4);
  mixer8.gain(0, 0.4);
  mixer8.gain(1, 0.4);
  mixer8.gain(2, 0.4);
  mixer8.gain(3, 0.4);
  mixer9.gain(0, 0.4);
  mixer9.gain(1, 0.4);
  samplesverb.gain(0, 0.4);
  samplesverb.gain(1, 0.4);
  samplesverb.gain(2, 0.4);
  mixerdelay.gain(0, 0.4);
  mixerdelay.gain(1, 0.3);
  mixerdelay.gain(2, 0.2);
  mixerdelay.gain(3, 0.1);
  mixersum.gain(0, 1);
  mixersum.gain(1, 1);
  mixersum.gain(2, 1);
  mixersum.gain(3, 1);
  delay1.delay(0, 200);
  delay1.delay(1, 400);
  delay1.delay(2, 600);
  // delay1.disable(0);
  // delay1.disable(1);
  // delay1.disable(2);
  freeverb1.roomsize(1);


  // Initialize the SD card
  SPI.setMOSI(SDCARD_MOSI_PIN);
  SPI.setSCK(SDCARD_SCK_PIN);
  if (!(SD.begin(SDCARD_CS_PIN))) {
    // stop here if no SD card, but print a message
    while (1) {
      Serial.println("Unable to access the SD card");
      delay(500);
    }
  }

}

void loop() {
  //  Serial.println(ledPin);
  //  float effectPot = (A9);

  buttonState = digitalRead(buttonPin);
  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      buttonPushCounter++;
    }
  }
  lastButtonState = buttonState;

  if (buttonPushCounter % 2 == 0 && recorder.mode != 1 && recorder.mode != 2) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  buttonState1 = digitalRead(mutePin1);


  if (buttonState1 != lastButtonState1) {
    if (buttonState1 == HIGH) {
      buttonPushCounter1++;
    }
  }
  lastButtonState1 = buttonState1;

  if (buttonPushCounter1 % 2 == 0) {
    digitalWrite(ledMute1, HIGH);
  } else {
    digitalWrite(ledMute1, LOW);
  }


  buttonState2 = digitalRead(mutePin2);

  // compare the buttonState to its previous state
  if (buttonState2 != lastButtonState2) {
    if (buttonState2 == HIGH) {
      buttonPushCounter2++;
    }
  }
  lastButtonState2 = buttonState2;


  if (buttonPushCounter2 % 2 == 0) {
    digitalWrite(ledMute2, HIGH);
  } else {
    digitalWrite(ledMute2, LOW);
  }




  // read the pushbutton input pin:
  buttonState3 = digitalRead(mutePin3);

  // compare the buttonState to its previous state
  if (buttonState3 != lastButtonState3) {
    if (buttonState3 == HIGH) {
      buttonPushCounter3++;
    }
  }
  lastButtonState3 = buttonState3;

  if (buttonPushCounter3 % 2 == 0) {
    digitalWrite(ledMute3, HIGH);
  } else {
    digitalWrite(ledMute3, LOW);
  }




  // read the pushbutton input pin:
  buttonState4 = digitalRead(mutePin4);

  // compare the buttonState to its previous state
  if (buttonState4 != lastButtonState4) {
    if (buttonState4 == HIGH) {
      buttonPushCounter4++;
    }
  }
  lastButtonState4 = buttonState4;

  if (buttonPushCounter4 % 2 == 0) {
    digitalWrite(ledMute4, HIGH);
  } else {
    digitalWrite(ledMute4, LOW);
  }




  // read the pushbutton input pin:
  buttonState5 = digitalRead(mutePin5);

  // compare the buttonState to its previous state
  if (buttonState5 != lastButtonState5) {
    if (buttonState5 == HIGH) {
      buttonPushCounter5++;
    }
  }
  lastButtonState5 = buttonState5;

  if (buttonPushCounter5 % 2 == 0) {
    digitalWrite(ledMute5, HIGH);
  } else {
    digitalWrite(ledMute5, LOW);
  }


  // read the pushbutton input pin:
  buttonState6 = digitalRead(recordPin);
  // compare the buttonState to its previous state
  if (buttonState6 != lastButtonState6) {
    if (buttonState6 == HIGH) {
      buttonPushCounter6++;
      //Serial.println(">>> Record Button Press");
      //Serial.print("mode ");
      //Serial.println(recorder.mode);
      //      if (recorder.mode == 3) stopPlayingRecording();
      if (recorder.mode == 0) recorder.startRecording();
    }
  }
  lastButtonState6 = buttonState6;


  // read the pushbutton input pin:
  buttonState7 = digitalRead(samplePin1);
  //  Serial.println(buttonState7);

  // compare the buttonState to its previous state
  if (buttonState7 != lastButtonState7) {
    if (buttonState7 == HIGH) {
      buttonPushCounter7++;
      //Serial.println(">>> Sample channel 1");
      //      if (recorder.mode == 1) recorder.stopRecording();
      if (recorder.mode == 0 || recorder.mode == 3) toggleChannelSampleMode(2); // startPlayingRecording(0);
      else if (recorder.mode == 2) assignSampleToChannel(recorder.recordsIndex, 2);
    }
  }
  lastButtonState7 = buttonState7;

  if (recorder.mode == 2) {
    digitalWrite(ledSample1, ((millis() % 1000) > 500));
  } else if (channelsSampleMode[2]) {
    digitalWrite(ledSample1, HIGH);
  } else {
    digitalWrite(ledSample1, LOW);
  }


  // read the pushbutton input pin:
  buttonState8 = digitalRead(samplePin2);
  //  Serial.println(buttonState8);


  // compare the buttonState to its previous state
  if (buttonState8 != lastButtonState8) {
    if (buttonState8 == HIGH) {
      buttonPushCounter8++;
      //Serial.println(">>> Sample channel 2");
      if (recorder.mode == 1) recorder.stopRecording();
      if (recorder.mode == 0 || recorder.mode == 3) toggleChannelSampleMode(3); //startPlayingRecording(1);
      else if (recorder.mode == 2) assignSampleToChannel(recorder.recordsIndex, 3);
    }
  }
  lastButtonState8 = buttonState8;

  if (recorder.mode == 2) {
    digitalWrite(ledSample2, ((millis() % 1000) > 500));
  } else if (channelsSampleMode[3]) {
    digitalWrite(ledSample2, HIGH);
  } else {
    digitalWrite(ledSample2, LOW);
  }


  // read the pushbutton input pin:
  buttonState9 = digitalRead(samplePin3);

  // compare the buttonState to its previous state
  if (buttonState9 != lastButtonState9) {
    if (buttonState9 == HIGH) {
      buttonPushCounter9++;
      //Serial.println(">>> Sample channel 3");
      if (recorder.mode == 1) recorder.stopRecording();
      if (recorder.mode == 0 || recorder.mode == 3) toggleChannelSampleMode(4); //startPlayingRecording(2);
      else if (recorder.mode == 2) assignSampleToChannel(recorder.recordsIndex, 4);
    }
  }
  lastButtonState9 = buttonState9;

  if (recorder.mode == 2) {
    digitalWrite(ledSample3, ((millis() % 1000) > 500));
  } else if (channelsSampleMode[4]) {
    digitalWrite(ledSample3, HIGH);
  } else {
    digitalWrite(ledSample3, LOW);
  }

  // read the pushbutton input pin:
  buttonState10 = digitalRead(samplePin4);

  // compare the buttonState to its previous state
  if (buttonState10 != lastButtonState10) {
    if (buttonState10 == HIGH) {
      buttonPushCounter10++;
      //Serial.println(">>> Sample channel 4");
      if (recorder.mode == 1) recorder.stopRecording();
      if (recorder.mode == 0 || recorder.mode == 3) toggleChannelSampleMode(0); //startPlayingRecording(3);
      else if (recorder.mode == 2) assignSampleToChannel(recorder.recordsIndex, 0);
    }
  }
  lastButtonState10 = buttonState10;

  if (recorder.mode == 2) {
    digitalWrite(ledSample4, ((millis() % 1000) > 500));
  } else if (channelsSampleMode[0]) {
    digitalWrite(ledSample4, HIGH);
  } else {
    digitalWrite(ledSample4, LOW);
  }

  //  // read the pushbutton input pin:
  //  buttonState11 = digitalRead(samplePin5);
  //
  //  // compare the buttonState to its previous state
  //  if (buttonState11 != lastButtonState11) {
  //    if (buttonState11 == HIGH) {
  //      buttonPushCounter11++;
  //      Serial.println("sample btn 5");
  //    }
  //  }
  //  lastButtonState11 = buttonState11;
  //
  //  if (buttonPushCounter11 % 2 == 0) {
  //    digitalWrite(ledSample5, HIGH);
  //   } else {
  //    digitalWrite(ledSample5, LOW);
  //  }



  // Update all the button objects
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();

  // delay effect parameters
  int delaytime = map(analogRead(A10), 0, 1023, 1023, 0) / 5;
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

  float wetDrypot1 = map(analogRead(A8), 0 , 1023, 1023, 0);
  float wetDrypot2 = map(analogRead(A0), 0 , 1023, 1023, 0);
  float wetDrypot3 = map(analogRead(A2), 0 , 1023, 1023, 0);
  float wetDrypot4 = map(analogRead(A1), 0 , 1023, 1023, 0);
  float wetDrypot5 = map(analogRead(A3), 0 , 1023, 1023, 0);



  //MUTES
  mixer1.gain(0, buttonPushCounter4 % 2);
  mixer1.gain(1, buttonPushCounter2 % 2);
  mixer1.gain(2, buttonPushCounter1 % 2);
  mixer1.gain(3, buttonPushCounter3 % 2);
  mixer2.gain(0, buttonPushCounter5 % 2);

  mixer2.gain(1, buttonPushCounter5 % 2);
  mixer2.gain(2, buttonPushCounter4 % 2);
  mixer2.gain(3, buttonPushCounter2 % 2);
  mixer3.gain(0, buttonPushCounter1 % 2);
  mixer3.gain(1, buttonPushCounter3 % 2);

  mixer4.gain(0, buttonPushCounter4 % 2);
  mixer4.gain(1, buttonPushCounter2 % 2);
  mixer4.gain(2, buttonPushCounter1 % 2);
  mixer4.gain(3, buttonPushCounter3 % 2);
  mixer5.gain(0, buttonPushCounter5 % 2);

  mixer5.gain(1, buttonPushCounter5 % 2);
  mixer5.gain(2, buttonPushCounter4 % 2);
  mixer5.gain(3, buttonPushCounter2 % 2);
  mixer6.gain(0, buttonPushCounter1 % 2);
  mixer6.gain(1, buttonPushCounter3 % 2);

  mixer7.gain(0, buttonPushCounter4 % 2);
  mixer7.gain(1, buttonPushCounter2 % 2);
  mixer7.gain(2, buttonPushCounter1 % 2);
  mixer7.gain(3, buttonPushCounter3 % 2);
  mixer8.gain(0, buttonPushCounter5 % 2);

  mixer8.gain(1, buttonPushCounter5 % 2);
  mixer8.gain(2, buttonPushCounter4 % 2);
  mixer8.gain(3, buttonPushCounter2 % 2);
  mixer9.gain(0, buttonPushCounter1 % 2);
  mixer9.gain(1, buttonPushCounter3 % 2);

  //WETDRY DELAY
  mixer4.gain(0, (wetDrypot1 / 1024.0) * (buttonPushCounter4 % 2));
  mixer4.gain(1, (wetDrypot2 / 1024.0) * (buttonPushCounter2 % 2));
  mixer4.gain(2, (wetDrypot3 / 1024.0) * (buttonPushCounter1 % 2));
  mixer4.gain(3, (wetDrypot4 / 1024.0) * (buttonPushCounter3 % 2));
  mixer5.gain(0, (wetDrypot5 / 1024.0) * (buttonPushCounter5 % 2));

  mixer5.gain(1, (wetDrypot1 / 1024.0) * (buttonPushCounter5 % 2));
  mixer5.gain(2, (wetDrypot2 / 1024.0) * (buttonPushCounter4 % 2));
  mixer5.gain(3, (wetDrypot3 / 1024.0) * (buttonPushCounter2 % 2));
  mixer6.gain(0, (wetDrypot4 / 1024.0) * (buttonPushCounter1 % 2));
  mixer6.gain(1, (wetDrypot5 / 1024.0) * (buttonPushCounter3 % 2));

  mixer7.gain(0, (wetDrypot1 / 1024.0) * (buttonPushCounter4 % 2));
  mixer7.gain(1, (wetDrypot2 / 1024.0) * (buttonPushCounter2 % 2));
  mixer7.gain(2, (wetDrypot3 / 1024.0) * (buttonPushCounter1 % 2));
  mixer7.gain(3, (wetDrypot4 / 1024.0) * (buttonPushCounter3 % 2));
  mixer8.gain(0, (wetDrypot5 / 1024.0) * (buttonPushCounter5 % 2));

  mixer8.gain(1, (wetDrypot1 / 1024.0) * (buttonPushCounter5 % 2));
  mixer8.gain(2, (wetDrypot2 / 1024.0) * (buttonPushCounter4 % 2));
  mixer8.gain(3, (wetDrypot3 / 1024.0) * (buttonPushCounter2 % 2));
  mixer9.gain(0, (wetDrypot4 / 1024.0) * (buttonPushCounter1 % 2));
  mixer9.gain(1, (wetDrypot5 / 1024.0) * (buttonPushCounter3 % 2));

  //   SELECT
  int effectSelect = 300; //analogRead(A13);
  //  Serial.println(analogRead(A13));
  

  if (effectSelect >= 0 and effectSelect <= 230) {
    mixersum.gain(0, 1);
    mixersum.gain(1, 0);
    mixersum.gain(2, 0);
  } else if (effectSelect >= 230 and effectSelect <= 350) {
    mixersum.gain(0, 1);
    mixersum.gain(1, 1);
    mixersum.gain(2, 0);
  } else if (effectSelect >= 350 and effectSelect <= 600) {
    mixersum.gain(0, 1);
    mixersum.gain(1, 0);
    mixersum.gain(2, 1);
  }
  // else if (effectSelect >= 500 and effectSelect <= 750)
  //     {  samples_crusher.gain(0, 0.4);
  //        samples_crusher.gain(1, 0.4);}

  //  Serial.println(analogRead(A12));

  if (digitalRead(ledPin) == HIGH)     //play stop
  {


    //change sample with kitSelect

    int kitSelect = analogRead(A12);
    //    Serial.println(kitSelect);

    //  Serial.println(kitSelect);
    if (button0.fallingEdge()) {
      if (channelsSampleMode[0] && assignedSamples[0] > -1) {
        startPlayingRecording1();
      }
      else if (kitSelect > 1000) {
        playSdWav5.play(AudioSampleA1);
      }
      else if (kitSelect > 450) {
        playSdWav5.play(AudioSampleB1);
      }
      else if (kitSelect > 300) {
        playSdWav5.play(AudioSampleC1);
      }
      else if (kitSelect > 230) {
        playSdWav5.play(AudioSampleD1);
      }
      else if (kitSelect > 180) {
        playSdWav5.play(AudioSampleE1);
      }
      else if (kitSelect > 150) {
        playSdWav5.play(AudioSampleF1);
      }
      else if (kitSelect > 130) {
        playSdWav5.play(AudioSampleG1);
      }
      else if (kitSelect < 130) {
        playSdWav5.play(AudioSampleH1);
      }
    }

    if (button1.fallingEdge())  {
      if (channelsSampleMode[1] && assignedSamples[1] > -1) {
        startPlayingRecording2();
      }
      else if (kitSelect > 1000) {
        playSdWav1.play(AudioSampleA2);
      }
      else if (kitSelect > 450) {
        playSdWav1.play(AudioSampleB2);
      }
      else if (kitSelect > 300) {
        playSdWav1.play(AudioSampleC2);
      }
      else if (kitSelect > 230) {
        playSdWav1.play(AudioSampleD2);
      }
      else if (kitSelect > 180) {
        playSdWav1.play(AudioSampleE2);
      }
      else if (kitSelect > 150) {
        playSdWav1.play(AudioSampleF2);
      }
      else if (kitSelect > 130) {
        playSdWav1.play(AudioSampleG2);
      }
      else if (kitSelect < 130) {
        playSdWav1.play(AudioSampleH2);
      }
    }


    if (button2.fallingEdge())  {
      if (channelsSampleMode[2] && assignedSamples[2] > -1) {
        startPlayingRecording3();
      }
      else if (kitSelect > 1000) {
        playSdWav2.play(AudioSampleA3);
      }
      else if (kitSelect > 450) {
        playSdWav2.play(AudioSampleB3);
      }
      else if (kitSelect > 300) {
        playSdWav2.play(AudioSampleC3);
      }
      else if (kitSelect > 230) {
        playSdWav2.play(AudioSampleD3);
      }
      else if (kitSelect > 180) {
        playSdWav2.play(AudioSampleE3);
      }
      else if (kitSelect > 150) {
        playSdWav2.play(AudioSampleF3);
      }
      else if (kitSelect > 130) {
        playSdWav2.play(AudioSampleG3);
      }
      else if (kitSelect < 130) {
        playSdWav2.play(AudioSampleH3);
      }
    }

    if (button3.fallingEdge())  {
      if (channelsSampleMode[3] && assignedSamples[3] > -1) {
        startPlayingRecording4();
      }
      else if (kitSelect > 1000) {
        playSdWav3.play(AudioSampleA4);
      }
      else if (kitSelect > 450) {
        playSdWav3.play(AudioSampleB4);
      }
      else if (kitSelect > 300) {
        playSdWav3.play(AudioSampleC4);
      }
      else if (kitSelect > 230) {
        playSdWav3.play(AudioSampleD4);
      }
      else if (kitSelect > 180) {
        playSdWav3.play(AudioSampleE4);
      }
      else if (kitSelect > 150) {
        playSdWav3.play(AudioSampleF4);
      }
      else if (kitSelect > 130) {
        playSdWav3.play(AudioSampleG4);
      }
      else if (kitSelect < 130) {
        playSdWav3.play(AudioSampleH4);
      }

    }
    if (button4.fallingEdge())  {
      if (channelsSampleMode[4] && assignedSamples[4] > -1) {
        startPlayingRecording5();
      }
      else if (kitSelect > 1000) {
        playSdWav4.play(AudioSampleA5);
      }
      else if (kitSelect > 450) {
        playSdWav4.play(AudioSampleB5);
      }
      else if (kitSelect > 300) {
        playSdWav4.play(AudioSampleC5);
      }
      else if (kitSelect > 230) {
        playSdWav4.play(AudioSampleD5);
      }
      else if (kitSelect > 180) {
        playSdWav4.play(AudioSampleE5);
      }
      else if (kitSelect > 150) {
        playSdWav4.play(AudioSampleF5);
      }
      else if (kitSelect > 130) {
        playSdWav4.play(AudioSampleG5);
      }
      else if (kitSelect < 130) {
        playSdWav4.play(AudioSampleH5);
      }
    }
  }
  // If we're playing or recording, carry on...
  if (recorder.mode == 1) recorder.continueRecording();
  if (recorder.mode == 3) continuePlayingRecording();
}


void continuePlayingRecording() {
  for (int i = 0; i < 5; i++) {
    if (!rawPlayers[i].isPlaying()) {
      rawPlayers[i].stop();
    }
  }
  recorder.mode = 0;
}

void stopPlayingRecording() {
  //Serial.println("stopPlaying");
  if (recorder.mode == 3) {
    for (int i = 0; i < 5; i++) {
      rawPlayers[i].stop();
    }
  }
}

void assignSampleToChannel(int sampleIndex, int channelIndex) {
  //Serial.print("Assigning sample ");
  //Serial.print(sampleIndex);
  //Serial.print(" to channel ");
  //Serial.println(channelIndex + 1);
  assignedSamples[channelIndex] = sampleIndex;
  recorder.mode = 0;
  recorder.recordsIndex++;
  if (recorder.recordsIndex > 4) recorder.recordsIndex = 0;
  channelsSampleMode[channelIndex] = true;
  //printAssignedSamples();
}


void toggleChannelSampleMode(int index) {
  //Serial.print("Changing channel ");
  //Serial.print(index);
  //Serial.print(" sample mode to ");
  //Serial.println(!channelsSampleMode[index]);
  channelsSampleMode[index] = !channelsSampleMode[index];
}

void printAssignedSamples() {
  Serial.print("{ ");
  Serial.print(assignedSamples[0]);
  Serial.print(", ");
  Serial.print(assignedSamples[1]);
  Serial.print(", ");
  Serial.print(assignedSamples[2]);
  Serial.print(", ");
  Serial.print(assignedSamples[3]);
  Serial.print(", ");
  Serial.print(assignedSamples[4]);
  Serial.println(" }");
}

