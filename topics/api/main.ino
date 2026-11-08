// main.ino OMQ BLAK FAT12 API sol pattern omq String name OMQ API
void setup(){Serial.begin(9600);Serial.println(name);}
void loop(){digitalWrite(13,HIGH);delay(500);digitalWrite(13,LOW);delay(500);}
// What is API - API connects apps - request response
// REST - GET POST PUT DELETE - resource
// GET - GET fetch data - read only
// POST - POST create new data
// PUT PATCH - PUT replace - PATCH update part
// DELETE - DELETE remove data
// Status Codes - 200 OK - 404 Not Found - 500 Error
// Headers Auth - Authorization Bearer - Content JSON
// JSON - JSON key value - array object
// Fetch - fetch url then json catch
// Test API - Postman curl - test endpoints
// Rules - version v1 - docs - errors
