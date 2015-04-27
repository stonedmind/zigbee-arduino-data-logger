void setup(void)
{
	Serial.begin(9600);
	Serial3.begin(9600);
}

void __send(int id, float val)
{
	Serial3.print(id);
	Serial3.write(',');
	Serial3.print(val);
	Serial3.println();
}

void loop(void)
{
	__send(1, 3.142);
	delay(1000);
}
