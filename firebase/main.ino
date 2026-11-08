// main.ino OMQ BLAK FAT12 FIREBASE sol pattern omq String name OMQ FIREBASE
void setup(){Serial.begin(9600);Serial.println(name);}
void loop(){digitalWrite(13,HIGH);delay(500);digitalWrite(13,LOW);delay(500);}
// Basic Setup - firebase console - project - config
// Auth - signIn email password - Google
// Firestore - collection doc - addDoc getDocs
// Realtime DB - ref set onValue - live sync
// Storage - ref uploadBytes - getDownloadURL
// Hosting - firebase deploy - hosting
// Functions - onCall - onRequest - cloud
// Security Rules - allow read write - if auth
// Query - where orderBy limit - query
// Offline - enable persistence - cache
// Analytics - logEvent - analytics
// Rules - rules - auth - validate
