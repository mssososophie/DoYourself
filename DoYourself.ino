//needs to be onbuttonpress()

void setup() {
  // put your setup code here, to run once:
pinMode(numberofpin, )
}

void loop() {
  // put your main code here, to run repeatedly:

}

//to controll the vibration modules you write an digitialwrite function which takes the pin number and number between 0-225 as aguments - we're driving our motor at the rated voltage as described by the scale of 0-225.

//next challenge is to ensure that the length of the vibration is longer for the dash function but the same voltage as the dot


void dot () {digitalWrite(numberofpin,225); delay (300); digitalWrite(vibrate,LOW); delay (300);}//the dot this code make the led on for 300 than off for 300
void dash () {digitalWrite(numberofpin,225); delay (900); digitalWrite(vibrate,LOW); delay (300);}//the dash this code make the led on for 900 than off for 300
void shortspace () {delay(600);}//space between letters
void space () {delay (1200);}//space between words
