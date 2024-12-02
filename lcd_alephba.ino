#include <LiquidCrystal.h>
// (rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(0, 1, 8, 9, 10, 11);
int i;
int x,j=0;
void setup()
{
lcd.begin(16, 2);
}
void loop()
{

for(i=0;i<26;i++){
  if(i>=16){
int x='A'+i;
lcd.setCursor(j, 1);
 x='A'+i;
lcd.print(char(x));
delay(250);
j++;
}
else{
int x='A'+i;  //x=65==>A
lcd.print(char(x));
delay(250);
}}
while(1){}
}