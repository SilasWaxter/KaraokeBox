#include "MusicNotes.h"

void setup() {

Serial.begin(9600);
Serial.println(note.C_5);

}

void loop() {


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
