// main.ino - OMQ - BLAK FAT12 - C - sol<pattern>omq
String name="OMQ - C - BLAK FAT12";
String points[12]={
"Basic Structure - #include <stdio.h> - int main() - printf Hello",
"Data Types - int float double char void long short",
"Variables & Constants - int age=20 - const MAX=100 - #define SIZE 50",
"Input & Output - scanf %d - printf %d - & address",
"Operators - Arithmetic * - % - Assignment == - Logical && ||",
"Conditional Statements - if age>=18 Adult - else if - else",
"Loops - for i<5 - while - do while",
"Functions - int add(a,b) return a+b",
"Arrays - int arr[3]=[1,2,3] - index 0 1 2",
"Strings - char str[20]=Hello - %s - char array \0",
"Pointers - int *ptr=&x - *ptr value - ptr address",
"Structures + Files + Libs - struct student - FILE *f - #include <stdio.h>",
};
void setup(){Serial.begin(9600);pinMode(LED_BUILTIN,OUTPUT);Serial.println(name);for(int i=0;i<12;i++){Serial.print(i+1);Serial.print(". ");Serial.println(points[i]);}}
void loop(){digitalWrite(LED_BUILTIN,HIGH);delay(500);digitalWrite(LED_BUILTIN,LOW);delay(500);Serial.println("OMQ - C - LIVE!");delay(2000);}
