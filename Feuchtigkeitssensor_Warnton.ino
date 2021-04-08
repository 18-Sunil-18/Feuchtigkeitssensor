int messwert=0;

int PIEPS=6; //Mit dem Namen "PIEPS" wird jetzt der Pin6 bezeichnet, an dem ein Piezo-Speaker angeschlossen wird.


void setup()
{
Serial.begin(9600);
pinMode (6,OUTPUT); //Im Setup wird der Pin6 als Ausgang festgelegt.
}

void loop()

{

 messwert=analogRead(A0);

 Serial.print("Feuchtigkeits-Messwert:");

 Serial.println(messwert);

 delay(500);

if (messwert <200 ) //Hier beginnt die Abfrage: Wenn der Sensorwert kleiner als "200" ist, dann...

{ 

digitalWrite(PIEPS, HIGH); //...soll der Piezo-Speaker piepsen.
}

else //..ansonsten...

{

digitalWrite(PIEPS, LOW); //...soll er leise sein.

}

}
