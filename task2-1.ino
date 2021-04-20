const pin_t MY_LED = D6;
SYSTEM_THREAD(ENABLED);
void setup() {
    pinMode(MY_LED, OUTPUT);
    // name : MIR
    //used 1.5 seconds delay for dash
    //used 0.5 seconds delay for dot
    //used 3.0 seconds delay between letters
    digitalWrite(MY_LED, HIGH);
    delay(1500);
    digitalWrite(MY_LED, LOW);
    delay(1500);
    digitalWrite(MY_LED, HIGH);
    delay(1500);
    digitalWrite(MY_LED, LOW);
    delay(3000);
    
    digitalWrite(MY_LED, HIGH);
    delay(500);
    digitalWrite(MY_LED, LOW);
    delay(500);
    digitalWrite(MY_LED, HIGH);
    delay(500);
    digitalWrite(MY_LED, LOW);
    delay(3000);
    
    digitalWrite(MY_LED, HIGH);
    delay(500);
    digitalWrite(MY_LED, LOW);
    delay(500);
    digitalWrite(MY_LED, HIGH);
    delay(1500);
    digitalWrite(MY_LED, LOW);
    delay(1500);
    digitalWrite(MY_LED, HIGH);
    delay(500);
    digitalWrite(MY_LED, LOW);
    delay(3000);
    
}
