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
lcd.write("hello");


}

void loop()
{
  lcd.write("hello");
}

/*
 * __SPEKAER__
 * tone() is used to output the speaker note
 * noTone() is used to stop playing tone
 * 
 * MusicNotes.h creates a structure with conts uint8_t members that
 * map notes on the scales (currently 3-5) to their associated freq.
 * 
 * __sdf__
 * 
 * 
 * 
 */
