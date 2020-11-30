int laser1 = 13;
int laser2 = 12;
int laser3 = 11;
int laser4 = 10;
int laser5 = 9;

// Ima 5 laser ali kako ih zalemiti da stoje savrseno paralelno jedan sa drugim?
// Takodje, plan je dodati i po dva servo motora za svaki laser da pravim zurku
// Kako to uskladiti? :(

void setup() {
  // put your setup code here, to run once:
  pinMode(laser1, OUTPUT);
  pinMode(laser2, OUTPUT);
  pinMode(laser3, OUTPUT);
  pinMode(laser4, OUTPUT);
  pinMode(laser5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(laser1, HIGH);
  digitalWrite(laser2, HIGH);
  digitalWrite(laser3, HIGH);
  digitalWrite(laser4, HIGH);
  digitalWrite(laser5, HIGH);


}
