// main.ino OMQ BLAK FAT12 MONGODB sol pattern omq String name OMQ MONGODB
void setup(){Serial.begin(9600);Serial.println(name);}
void loop(){digitalWrite(13,HIGH);delay(500);digitalWrite(13,LOW);delay(500);}
// Basic Concepts - database collection document
// Connect - mongodb atlas - mongoose connect
// Schema Model - schema String Number required
// Create - insertOne create - save
// Read Find - find findOne - filter
// Update - updateOne set - findByIdAndUpdate
// Delete - deleteOne - findByIdAndDelete
// Query Operators - gt lt in regex - and or
// Index - createIndex - unique - speed
// Aggregate - aggregate match group sort
// Relations - ref populate - embed ref
// Rules - schema - index - validate
