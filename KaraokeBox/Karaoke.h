#ifndef Karaoke
#define Karaoke

#include "CircuitDefinitions.h"
#include "Arduino.h"

typedef struct songBlock    //a blueprint for the component in each song (Contains note and lyric info)
{
  uint16_t noteFreq;        //e.g. C_5, A_3
  uint16_t noteMillis;      //time of note in milli-seconds
  char lyric[8];            //corresponding lyric for note
};

typedef uint16_t numberOfSongBlocksInBar;   //typedef for modularity and readabillity.

//Function Declarations
void playSong(songBlock sBlocks[], numberOfSongBlocksInBar numberOfSongBlocksInBar[], uint16_t numberOfBars);

static inline uint8_t getIndexOfFirstSongBlockInBar(numberOfSongBlocksInBar sBlocksInBar[], uint8_t currentBar);

#endif //Karaoke
