#ifndef karaoke
#define karaoke

typedef struct songBlock    //a blueprint for the component in each song (Contains note and lyric info)
{
  uint16_t noteFreq;     //e.g. C_5, A_3
  uint16_t noteMillis;    //time of note in milli-seconds
  char lyric[8];        //corresponding lyric for note
};

uint8_t getNumberOfSongBlocksInBar(songBlock song[], uint16_t startOfBarIndex, uint16_t timeInBar)
{
  uint16_t timeOfSongBlocks = 0;         //running total of time from songBlocks
  uint8_t numberOfSongBlocksInBar = 0;  //counts number of songBlocks in bar
  
  for(numberOfSongBlocksInBar; timeOfSongBlocks < timeInBar; numberOfSongBlocksInBar++)
  {
    timeOfSongBlocks += song[(startOfBarIndex + numberOfSongBlocksInBar)].noteMillis;    //add time of index to running total.

    //Serial Debbuging
    Serial.println("numberOfSongBlocksInBar: " + String(numberOfSongBlocksInBar) + ", timeOfSongBlocks: " + String(timeOfSongBlocks)
                    + ", lyric @ index: " + song[(startOfBarIndex + numberOfSongBlocksInBar)].lyric);
  }

  return numberOfSongBlocksInBar;
}

#endif //karaoke
