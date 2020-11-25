#ifndef Karaoke
#define Karaoke

#include "CircuitDefinitions.h"
#include "Arduino.h"
#include <LiquidCrystal.h>

typedef struct songBlock    //a blueprint for the component in each song (Contains note and lyric info)
{
  uint16_t noteFreq;        //e.g. C_5, A_3
  uint16_t noteMillis;      //time of note in milli-seconds
  char lyric[9];            //corresponding lyric for note
};

typedef uint16_t numberOfSongBlocksInBar;   //typedef for modularity and readabillity.


//Function Declarations
void playSong(LiquidCrystal *lcd, songBlock sBlocks[], numberOfSongBlocksInBar numberOfSongBlocksInBar[], uint16_t numberOfBars);

static void performBar(LiquidCrystal *lcd, songBlock sBlocks[], numberOfSongBlocksInBar sBlocksInBar[], uint8_t currentBar, uint8_t indexOfFirstSongBlockInBar);

static inline uint8_t getIndexOfFirstSongBlockInBar(numberOfSongBlocksInBar sBlocksInBar[], uint8_t currentBar);

#endif //Karaoke
