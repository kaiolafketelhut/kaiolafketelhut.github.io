// main.ino - OMQ - BLAK FAT12 - PYTHON - sol<pattern>omq
String name="OMQ - PYTHON - BLAK FAT12";
String points[12]={
"Hello World - print Hello World",
"Comments - # single - """ multi-line """",
"Variables - name=Gautam - age=22 - No declare type",
"Taking Input - input() - int(input()) - float(input())",
"Data Types - int float str bool list tuple set dict",
"Operators - Arithmetic + - * / // % ** - Comparison == != > <",
"If-Else - if age>=18 Adult else Minor",
"For + While Loop - for i in range(1,6) - while i<=5",
"Break + Continue - break stop - continue skip",
"Function - def add(a,b) return a+b",
"List + Dict - numbers=[10,20] append pop sort - dict {name:age}",
"Important Rules - Case-sensitive - Indentation - No ; - # comment",
};
void setup(){Serial.begin(9600);pinMode(LED_BUILTIN,OUTPUT);Serial.println(name);for(int i=0;i<12;i++){Serial.print(i+1);Serial.print(". ");Serial.println(points[i]);}}
void loop(){digitalWrite(LED_BUILTIN,HIGH);delay(500);digitalWrite(LED_BUILTIN,LOW);delay(500);Serial.println("OMQ - PYTHON - LIVE!");delay(2000);}
