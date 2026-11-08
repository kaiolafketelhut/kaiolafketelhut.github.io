// main.ino - OMQ - BLAK FAT12 - PROTOCOLS - sol<pattern>omq
String name="OMQ - PROTOCOLS - BLAK FAT12";
String points[12]={
"HTTP - Hypertext Transfer Protocol - Loads web pages",
"HTTPS - Hypertext Transfer Protocol Secure - Encrypts web",
"FTP - File Transfer Protocol - Transfers files",
"TCP - Transmission Control Protocol - Reliable ordered",
"UDP - User Datagram Protocol - Fast no guarantee",
"IP - Internet Protocol - Addresses routes packets",
"SMTP - Simple Mail Transfer Protocol - Sends email",
"POP3 - Post Office Protocol v3 - Downloads email",
"IMAP - Internet Message Access Protocol - Syncs email",
"DNS - Domain Name System - Resolves domain to IP",
"DHCP - Dynamic Host Configuration Protocol - Assigns IP",
"SSH + Telnet + SNMP - Secure Shell - Encrypted login - SNMP monitors",
};
void setup(){Serial.begin(9600);pinMode(LED_BUILTIN,OUTPUT);Serial.println(name);for(int i=0;i<12;i++){Serial.print(i+1);Serial.print(". ");Serial.println(points[i]);}}
void loop(){digitalWrite(LED_BUILTIN,HIGH);delay(500);digitalWrite(LED_BUILTIN,LOW);delay(500);Serial.println("OMQ - PROTOCOLS - LIVE!");delay(2000);}
