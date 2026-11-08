// main.ino - OMQ - BLAK FAT12 - LINUX - sol<pattern>omq
String name="OMQ - LINUX - BLAK FAT12";
String points[12]={
"/ - Root - / = Root - All folders start here",
"/boot - Boot Loader Files",
"/etc - Configuration Files",
"/home - User Home Directories",
"/root - Root Home Directory",
"/opt - Third-Party Applications",
"/dev - Device Files",
"/var - Variable Files",
"/bin + /sbin + /usr - User Binaries - System Binaries - User Apps",
"/proc + /sys + /mnt - Process Info - Virtual FS - Mount Directory",
"/media + /run + /tmp - Removable Devices - Temp FS - Temp Files",
"/lib + /srv + /lost+found - System Libraries - Service Data - Recover Files",
};
void setup(){Serial.begin(9600);pinMode(LED_BUILTIN,OUTPUT);Serial.println(name);for(int i=0;i<12;i++){Serial.print(i+1);Serial.print(". ");Serial.println(points[i]);}}
void loop(){digitalWrite(LED_BUILTIN,HIGH);delay(500);digitalWrite(LED_BUILTIN,LOW);delay(500);Serial.println("OMQ - LINUX - LIVE!");delay(2000);}
