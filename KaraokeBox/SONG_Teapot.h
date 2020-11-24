/* Lyrics and Music Pulled from:
 *  -https://www.singing-bell.com/wp-content/uploads/2015/12/Im-a-little-teapot_Singing-Bell.jpg
 */

#ifndef SONG_Teapot
#define SONG_Teapot

#include "Karaoke.h"

/*
typedef struct songBlock    //a blueprint for the component in each song (Contains note and lyric info)
{
  uint8_t noteFreq;     //e.g. C_5, A_3
  uint8_t noteMilli;    //time of note in milli-seconds
  char[8] lyric;        //corresponding lyric for note
};
*/

songBlock songTeapot[37] = {
  {noteC_5, 125, "I'm"},
  {D_5, 125, "a"},
  {E_5, 125, "lit-"},
  {F_5, 125, "tle"}
}


/*

I’m a little teapot
Short and stout.
Here is my handle,
Here is my spout.
When I get all steamed up
Hear me shout:
Tip me over
And pour me out!
*/

#endif //SONG_Teapot
