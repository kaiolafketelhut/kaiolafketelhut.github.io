// mime3.ino OMQ BLAK FAT12 MIME3 sol pattern omq String name OMQ MIME3
void setup(){Serial.begin(9600);Serial.println(name);}
void loop(){digitalWrite(13,HIGH);delay(500);digitalWrite(13,LOW);delay(500);}
// Text Mime3 - text - text/plain - .txt - utf8
// HTML Mime3 - html - text/html - .html - web
// JSON Mime3 - json - application/json - API - data
// Image Mime3 - image - image/png - .png - photo
// Audio Mime3 - audio - audio/mpeg - .mp3 - music
// Video Mime3 - video - video/mp4 - .mp4 - film
// PDF Mime3 - pdf - application/pdf - .pdf - doc
// Solidity Mime3 - solidity - text/x-solidity - .sol - code
// Arduino Mime3 - arduino - text/x-arduino - .ino - board
// Binary Mime3 - binary - octet-stream - .bin - boot
// Python Mime3 - python - text/x-python - .py - build
// Rules3 - type - ext - charset
