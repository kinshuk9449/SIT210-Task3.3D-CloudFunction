int led = D0;
int led1 = D4;
void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(led1, OUTPUT);
}
void loop() 
{
    if(Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "wave")==true)
    {

            digitalWrite(led, HIGH);
            delay(1000);
            digitalWrite(led, LOW);
            delay(1000);
            digitalWrite(led, HIGH);
            delay(1000);
            digitalWrite(led, LOW);
            delay(1000);
            digitalWrite(led, HIGH);
            delay(1000);
            digitalWrite(led, LOW);
            delay(1000);
    }
    if(Particle.publish("Deakin_RIOT_SIT210_Photon_Buddy", "pat")==true)
    {
            digitalWrite(led1, HIGH);
            delay(500);
            digitalWrite(led1, LOW);
            delay(500);
            digitalWrite(led1, HIGH);
            delay(500);
            digitalWrite(led1, LOW);
            delay(500);
            digitalWrite(led1, HIGH);
            delay(500);
            digitalWrite(led1, LOW);
            delay(500);
            digitalWrite(led1, HIGH);
            delay(500);
            digitalWrite(led1, LOW);
            delay(500);
    }
}