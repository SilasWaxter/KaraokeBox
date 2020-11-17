/* Data pulled from:
 *    -https://www.intmath.com/trigonometric-graphs/music.php
 *    -https://pages.mtu.edu/~suits/notefreqs.html
 */

#ifndef MusicNotes
#define MusicNotes

struct FrequencyOfNotes
{
  //--3rd Scale--
  const uint8_t C_3 = 131;
  const uint8_t CS_3 = 139;
  const uint8_t D_3 = 147;
  const uint8_t DS_3 = 156;
  const uint8_t E_3 = 165;
  const uint8_t F_3 = 175;
  const uint8_t FS_3 = 185;
  const uint8_t G_3 = 196;
  const uint8_t GS_3 = 208;
  const uint8_t A_3 = 220;
  const uint8_t AS_3 = 233;
  const uint8_t B_3 = 247;

  //--4th Scale--
  const uint8_t C_4 = 262;
  const uint8_t CS_4 = 277;
  const uint8_t D_4 = 294;
  const uint8_t DS_4 = 311;
  const uint8_t E_4 = 330;
  const uint8_t F_4 = 349;
  const uint8_t FS_4 = 370;
  const uint8_t G_4 = 392;
  const uint8_t GS_4 = 415;
  const uint8_t A_4 = 440;
  const uint8_t AS_4 = 466;
  const uint8_t B_4 = 494;
  
  //--5th Scale--
  const uint8_t C_5 = 523;
  const uint8_t CS_5 = 554;
  const uint8_t D_5 = 587;
  const uint8_t DS_5 = 622;
  const uint8_t E_5 = 659;
  const uint8_t F_5 = 698;
  const uint8_t FS_5 = 740;
  const uint8_t G_5 = 784;
  const uint8_t GS_5 = 831;
  const uint8_t A_5 = 880;
  const uint8_t AS_5 = 932;
  const uint8_t B_5 = 988;
}note;

#endif //MusicNotes
