// fat2.ino OMQ BLAK FAT12 FAT2 sol pattern omq String name OMQ FAT2
void setup(){Serial.begin(9600);Serial.println(name);}
void loop(){digitalWrite(13,HIGH);delay(500);digitalWrite(13,LOW);delay(500);}
// FAT12-2 - fat12 - 1.44MB - 512 - boot
// Boot2 - boot - 0x7C00 - 55AA - 512
// Sector2 - sector - 512 - 2880 - floppy
// File FAT2 - file - 8.3 - NAME - EXT
// Dir2 - dir - root - 224 - entry
// Cluster2 - cluster - 1 - 12bit - chain
// Image FAT2 - image - dd - img - mount
// QEMU2 - qemu - fda - boot - test
// History FAT2 - history - 1977 - DOS - floppy
// Retro2 - retro - C64 - Amiga - pixel
// Save FAT2 - save - backup - 2 - copies
// Rules2 - 512 - 55AA - backup
