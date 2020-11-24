#ifndef karaoke
#define karaoke

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

#endif //karaoke
