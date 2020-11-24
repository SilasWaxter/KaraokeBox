#include <LiquidCrystal.h>

#include "NotesLookupTable.h"
//#include "Karaoke.h"

//Hardware Defines:
#define SPEAKER_PIN 7

//Firmware Defines:
#define STARTUP_CREDITS_DELAY 1500

//Says which pins are hooked up to the LCD
LiquidCrystal lcd(9, 8, 5, 4, 3, 2);

//songsMusic asdf;

typedef struct songBlock    //a blueprint for the component in each song (Contains note and lyric info)
{
  uint8_t noteFreq;     //e.g. C_5, A_3
  uint8_t noteMilli;    //time of note in milli-seconds
  char lyric[8];        //corresponding lyric for note
};

uint8_t getNumberOfSongBlocksInBar(songBlock *sBlock, uint8_t timeInBar)
{
  uint8_t timeOfSongBlocks = 0;       //running total of time from songBlocks
  uint8_t i = 0;
  
  for(int i = 0; timeOfSongBlocks < timeInBar; i++)
  {
    timeOfSongBlocks += sBlock->noteMilli;    //add time of index to running total.
  }
  
  if((i + 1) > timeInBar)
  {
    Serial.println("getNumberOfSongBlocksInBar() failed. \nWent over timeInBar");
  }

  return (uint8_t)(i + 1);
}

void setup()
{
  //Initilize Serial Comm.
  Serial.begin(9600);
  
  //Initialize LCD
  lcd.begin(16, 2); 
  lcd.print("Karoke Box");
  lcd.setCursor(0, 1);      //start of 2nd row
  lcd.print("Created by:");
  delay(STARTUP_CREDITS_DELAY);
  lcd.clear();
  lcd.print("Evan, Jaccob,");
  lcd.setCursor(0, 1);      //start of 2nd row
  lcd.print("and Silas");
  delay(STARTUP_CREDITS_DELAY);
  lcd.clear();

  tone(7, 523);
  delay(2000);
}

void loop()
{
  
}

/*
 * __SPEKAER__
 * tone() is used to output the speaker note
 * noTone() is used to stop playing tone
 * 
 * MusicNotes.h creates a structure with conts uint8_t members that
 * map notes on the scales (currently 3-5) to their associated freq.
 * 
 * __LCD__
 * .begin(int x, int y) intilizes lcd with segments x by y.
 * .print(String Msg) prints Msg to the screen
 * .cleat() clears any characters from the screen
 * .setCursor(int column, int row) sets the cursor to the 0-based column & row
*/

 
