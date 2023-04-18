void setup (){
    Serial.begin(9600);
    pinMode(LED,OUTPUT);
    pinMode(BUTTON,INPUT);
}

void loop (){
if(digitalRead(BUTTON)== HIGH){
    digitalWrite(LED,HIGH);
}else {
    digitalWrite(LED,LOW);
}
