#include <LiquidCrystal.h>

#include "NotesLookupTable.h"
#include "Karaoke.h"

//Says which pins are hooked up to the LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

//songsMusic asdf;


void setup()
{
Serial.begin(9600);
lcd.begin(16, 2); 
lcd.print("hello");

}

void loop()
{
  lcd.print("hello");
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
*/

 
