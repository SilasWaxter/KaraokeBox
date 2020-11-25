/* Data pulled from:
 *    -https://www.intmath.com/trigonometric-graphs/music.php
 *    -https://pages.mtu.edu/~suits/notefreqs.html
 */

#ifndef NotesLookupTable
#define NotesLookupTable

#define NOTE_REST 0

struct FrequencyOfNotes
{
  //--3rd Scale--
  const unsigned int C_3 = 131;
  const unsigned int CS_3 = 139;
  const unsigned int D_3 = 147;
  const unsigned int DS_3 = 156;
  const unsigned int E_3 = 165;
  const unsigned int F_3 = 175;
  const unsigned int FS_3 = 185;
  const unsigned int G_3 = 196;
  const unsigned int GS_3 = 208;
  const unsigned int A_3 = 220;
  const unsigned int AS_3 = 233;
  const unsigned int B_3 = 247;

  //--4th Scale--
  const unsigned int C_4 = 262;
  const unsigned int CS_4 = 277;
  const unsigned int D_4 = 294;
  const unsigned int DS_4 = 311;
  const unsigned int E_4 = 330;
  const unsigned int F_4 = 349;
  const unsigned int FS_4 = 370;
  const unsigned int G_4 = 392;
  const unsigned int GS_4 = 415;
  const unsigned int A_4 = 440;
  const unsigned int AS_4 = 466;
  const unsigned int B_4 = 494;
  
  //--5th Scale--
  const unsigned int C_5 = 523;
  const unsigned int CS_5 = 554;
  const unsigned int D_5 = 587;
  const unsigned int DS_5 = 622;
  const unsigned int E_5 = 659;
  const unsigned int F_5 = 698;
  const unsigned int FS_5 = 740;
  const unsigned int G_5 = 784;
  const unsigned int GS_5 = 831;
  const unsigned int A_5 = 880;
  const unsigned int AS_5 = 932;
  const unsigned int B_5 = 988;
}note;

#endif //NotesLookupTable
