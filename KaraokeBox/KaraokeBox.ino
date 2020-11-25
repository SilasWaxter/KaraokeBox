#include "Karaoke.h"
#include "SONG_Teapot.h"
#include "CircuitDefinitions.h"

#include <LiquidCrystal.h>

LiquidCrystal lcd(LCD_RS, LCD_E, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

#define STARTUP_CREDITS_DELAY   0
#define STARTUP_TESTNOTE_DELAY  0

void setup()
{
  delay(500);
  
  //Initilize Serial Comm.
  Serial.begin(115200);
  
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

  //Play Test Note
  tone(SPEAKER_PIN, note.C_5);
  delay(STARTUP_TESTNOTE_DELAY);
  noTone(SPEAKER_PIN);


  //Degbugging Workspace
  playSong(&lcd, teapot_songBlock, teapot_numberOfSongBlocksInBar, teapot_numberOfBars);
}

void loop()
{
  
}

/*
 * __SPEKAER__
 * tone() is used to output the speaker note
 * noTone() is used to stop playing tone
 * 
 * MusicNotes.h creates a structure with const unsigned int members that
 * map notes on the scales (currently 3-5) to their associated freq.
 * 
 * __LCD__
 * .begin(int x, int y) intilizes lcd with segments x by y.
 * .print(String Msg) prints Msg to the screen
 * .cleat() clears any characters from the screen
 * .setCursor(int column, int row) sets the cursor to the 0-based column & row
*/

 
