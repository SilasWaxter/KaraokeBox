#include "Karaoke.h"

/*  Function: plays song's music and displays each bar's lyrics
 *  Param:
 *      sBlocks[]: loaded with songBlock[] of song
 *      numberOfSongBlocksInBar[]: number of songBlocks in x's Bar where [x]
*/

uint8_t _lyricRow = 1;        //used in alternating lyrics from first row (= 0) to second row (= 1)

void playSong(LiquidCrystal *lcd, songBlock sBlocks[], numberOfSongBlocksInBar sBlocksInBar[], uint16_t barsInSong)
{
  for(uint8_t currentBar = 0; currentBar < barsInSong; currentBar++)          //for each bar in song (i.e. sBlocks)
  { 
      uint8_t indexOfFirstSongBlockInBar = getIndexOfFirstSongBlockInBar(sBlocksInBar, currentBar);

      performBar(lcd, sBlocks, sBlocksInBar, currentBar, indexOfFirstSongBlockInBar);
  }
}


static void performBar(LiquidCrystal *lcd, songBlock sBlocks[], numberOfSongBlocksInBar sBlocksInBar[], uint8_t currentBar, uint8_t indexOfFirstSongBlockInBar)
{
  bool newBar = true;
  
  for(int i = 0; i < sBlocksInBar[currentBar]; i++)                     //for each songBlock in the current Bar
  {
    uint8_t index = (indexOfFirstSongBlockInBar + i);

    //Print Lyrics
    if(newBar)          //if its a new bar, change rows
    {
      newBar = false;   //no longer new bar
      
      if(_lyricRow == 0)
      {
        lcd->setCursor(0, 1);      //start of 2nd row
        lcd->print(sBlocks[index].lyric);
    
        _lyricRow = 1;
      }
      else  //_lcdRow == 1
      {
        lcd->clear();
        lcd->setCursor(0, 0);      //start of 1st row
        lcd->print(sBlocks[index].lyric);
        
        _lyricRow = 0;
      }
    }
    else
    {
      lcd->print(sBlocks[index].lyric);
    }

    //Play Music
    tone(SPEAKER_PIN, sBlocks[index].noteFreq);
    delay((sBlocks[index].noteMillis)*2);

    noTone(SPEAKER_PIN);
    delay(10);

    //This is messed up -->> Serial.println("CurrentBar: " + String(currentBar) + ", indexOfFirstSongBlockInBar: " + String(indexOfFirstSongBlockInBar) + ", lyric: " + String(sBlocks[index].noteFreq));
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
