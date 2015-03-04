
int led = 13;
//what pin the LED is connected to
void setup() {                

  pinMode(led, OUTPUT);     
}
//tells the machine that its a LED and what pin its in

void loop() {
  digitalWrite(led, HIGH);  //Turn LED on 
  delay(1000);        //wait 1000 ms      
  digitalWrite(led, LOW);    //turn LED off
  delay(1000);              //Wait 1000 ms
}
