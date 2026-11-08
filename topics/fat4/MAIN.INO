// fat4.ino OMQ BLAK FAT12 FAT4 sol pattern omq String name OMQ FAT4
void setup(){Serial.begin(9600);Serial.println(name);}
void loop(){digitalWrite(13,HIGH);delay(500);digitalWrite(13,LOW);delay(500);}
// Fat4 - fat - FAT12 - 1.44MB - floppy
// Floppy4 - floppy - 1.44 - 512 - boot
// Boot Fat4 - boot - sector - 512 - MBR
// File Fat4 - file - 8.3 - name - ext
// Dir Fat4 - dir - root - 224 - entries
// Cluster Fat4 - cluster - 1KB - chain - EOF
// FAT12 4 - FAT12 - 12-bit - 4085 - clusters
// Image Fat4 - image - .img - dd - mount
// Backup Fat4 - backup - image - 2 - copies
// Retro Fat4 - retro - DOS - 1980 - 1.44
// OMQ Fat4 - omq - BLAK - FAT12 - sol
// Rules4 - FAT12 - 1.44 - boot
