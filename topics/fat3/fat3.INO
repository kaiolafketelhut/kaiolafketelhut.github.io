// fat3.ino OMQ BLAK FAT12 FAT3 sol pattern omq String name OMQ FAT3
void setup(){Serial.begin(9600);Serial.println(name);}
void loop(){digitalWrite(13,HIGH);delay(500);digitalWrite(13,LOW);delay(500);}
// FAT12-3 - fat12 - 1.44MB - 512 - boot
// Boot3 - boot - 0x7C00 - 55AA - 512
// Sector3 - sector - 512 - 2880 - floppy
// File FAT3 - file - 8.3 - NAME - EXT
// Dir3 - dir - root - 224 - entry
// Cluster3 - cluster - 1 - 12bit - chain
// Image FAT3 - image - dd - img - mount
// QEMU3 - qemu - fda - boot - test
// History FAT3 - history - 1977 - DOS - floppy
// Retro3 - retro - C64 - Amiga - pixel
// Save FAT3 - save - backup - 2 - copies
// Rules3 - 512 - 55AA - backup
