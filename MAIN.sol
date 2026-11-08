// SPDX-License-Identifier: MIT
// MAIN.sol - OMQ - BLAK FAT12 - D183 - SKY
// sol<pattern>omq
pragma solidity ^0.8.20;
contract MAIN {
  string public name = "OMQ - SKY - BLAK FAT12";
  string public pattern = "sol<pattern>omq";
  uint public total = 12;
  struct Point { string slug; string title; string desc; string code; }
  Point[12] public points;
  constructor() {
    points[0]=Point("what","What is Sky?","Sky = Blue! Cloud! Free!","Sky = Blue Cloud Free");
    points[1]=Point("blue","Blue - Color!","Blue = Color! Calm! Sky!","Blue = Color Calm Sky");
    points[2]=Point("cloud","Cloud - White!","Cloud = White! Soft! Float!","Cloud = White Soft Float");
    points[3]=Point("sun","Sun - Shine!","Sun = Shine! Warm! Power!","Sun = Shine Warm Power");
    points[4]=Point("moon","Moon - Glow!","Moon = Glow! Night! Dream!","Moon = Glow Night Dream");
    points[5]=Point("star","Star - Light!","Star = Light! Sky! Dream!","Star = Light Sky Dream");
    points[6]=Point("bird","Bird - Fly!","Bird = Fly! Free! Sky!","Bird = Fly Free Sky");
    points[7]=Point("photo","Photo - Sky!","Photo = Sky! Light! Memory!","Photo = Sky Light Memory");
    points[8]=Point("berlin","Berlin Sky","Berlin = Sky! Blue! Free!","Berlin = Sky Blue Free");
    points[9]=Point("dream","Dream - Fly!","Dream = Fly! Sky! Imagine!","Dream = Fly Sky Imagine");
    points[10]=Point("future","Future Sky","Future = Sky! Drone! AI!","Future = Sky Drone AI");
    points[11]=Point("live","Live - Build Sky App!","Build sky app HTML! Blue!","Build Sky App!");
  }
  function getPoint(uint i) public view returns (Point memory) { return points[i]; }
}
