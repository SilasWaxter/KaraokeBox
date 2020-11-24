/* Lyrics and Music Pulled from:
 *  -https://www.singing-bell.com/wp-content/uploads/2015/12/Im-a-little-teapot_Singing-Bell.jpg
 */

#ifndef SONG_Teapot
#define SONG_Teapot

#include "Karaoke.h"
#include "NotesLookupTable.h"

#define SONGTEAPOT_TIMEINBAR 500    //Defines number of milliseconds in each bar

const songBlock songTeapot[4] = 
{
  {note.C_5, 125, "I'm"},
  {note.D_5, 125, "a"},
  {note.E_5, 125, "lit-"},
  {note.F_5, 125, "tle"}
};

const uint8_t numberOfNotesInBar[] = 
{ 
  4, 
};

#endif //SONG_Teapot
