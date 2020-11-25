/* Lyrics and Music Pulled from:
 *  -https://www.singing-bell.com/wp-content/uploads/2015/12/Im-a-little-teapot_Singing-Bell.jpg
 */

#ifndef SONG_Teapot
#define SONG_Teapot

#include "Karaoke.h"
#include "NotesLookupTable.h"

#define SONGTEAPOT_TIMEINBAR 500    //Defines number of milliseconds in each bar

const uint16_t teapot_numberOfBars = 16;

const songBlock teapot_songBlock[37] = 
{
  {note.C_4, 125, "I'm"},
  {note.D_4, 125, "a"},
  {note.E_4, 125, "lit-"},
  {note.F_4, 125, "tle"},

  {note.G_4, 250, "tea-"},
  {note.C_5, 250, "pot"},

  {note.A_4, 250, "short"},
  {note.C_5, 250, "and"},

  {note.G_4, 250, "stout"},
  {NOTE_REST, 250, ""},

  {note.F_4, 250, "Here"},
  {note.F_4, 125, "is"},
  {note.F_4, 125, "my"},

  {note.E_4, 250, "hand-"},
  {note.E_4, 250, "le"},

  {note.D_4, 250, "Here"},
  {note.D_4, 125, "is"},
  {note.D_4, 125, "my"},

  {note.C_4, 250, "spout"},
  {NOTE_REST, 250, ""},

  
};

const numberOfSongBlocksInBar teapot_numberOfSongBlocksInBar[(teapot_numberOfBars - 1)] = 
{
  4,
  2,
  2,
  2,
  3,
  2,
  3,
  2
};

#endif //SONG_Teapot
