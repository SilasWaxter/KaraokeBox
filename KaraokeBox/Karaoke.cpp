#include "Karaoke.h"

/*  Function: plays song's music and displays each bar's lyrics
 *  Param:
 *      sBlocks[]: loaded with songBlock[] of song
 *      numberOfSongBlocksInBar[]: number of songBlocks in x's Bar where [x]
*/
void playSong(songBlock sBlocks[], numberOfSongBlocksInBar sBlocksInBar[], uint16_t barsInSong)
{
  for(int currentBar = 0; currentBar < barsInSong; currentBar++)          //for each bar in song (i.e. sBlocks)
  {
    //Display Bar's Lyrics

    
    //Play Bar's Music
    for(int i = 0; i < sBlocksInBar[currentBar]; i++)                     //for each songBlock in the current Bar
    {
      uint8_t index = (getIndexOfFirstSongBlockInBar(sBlocksInBar, currentBar) + i);
      
      //Debugging
      //Serial.println("currentBar: " + String(currentBar) + "firstIndexOfSongBlockInBar: " + String(index));
      
      tone(SPEAKER_PIN, sBlocks[index].noteFreq);
      delay((sBlocks[index].noteMillis)*2);
      
      noTone(SPEAKER_PIN);
      delay(10);
    }
  }
}

static inline uint8_t getIndexOfFirstSongBlockInBar(numberOfSongBlocksInBar sBlocksInBar[], uint8_t currentBar)
{
  uint8_t index = 0;
  for(int i = 0; i < currentBar; i++)
  {
    index += sBlocksInBar[i];               //add number of songBlocks in each bar up to the currentBar
  }
  return index;
}
