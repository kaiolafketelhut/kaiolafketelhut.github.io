// mime2.ino OMQ BLAK FAT12 MIME2 sol pattern omq String name OMQ MIME2
void setup(){Serial.begin(9600);Serial.println(name);}
void loop(){digitalWrite(13,HIGH);delay(500);digitalWrite(13,LOW);delay(500);}
// Text Mime2 - text - text/plain - .txt - utf8
// HTML Mime2 - html - text/html - .html - web
// JSON Mime2 - json - application/json - API - data
// Image Mime2 - image - image/png - .png - photo
// Audio Mime2 - audio - audio/mpeg - .mp3 - music
// Video Mime2 - video - video/mp4 - .mp4 - film
// PDF Mime2 - pdf - application/pdf - .pdf - doc
// Solidity Mime2 - solidity - text/x-solidity - .sol - code
// Arduino Mime2 - arduino - text/x-arduino - .ino - board
// Binary Mime2 - binary - octet-stream - .bin - boot
// Python Mime2 - python - text/x-python - .py - build
// Rules2 - type - ext - charset
