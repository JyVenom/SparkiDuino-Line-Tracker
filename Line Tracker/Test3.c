#pragma config(Sensor, S3,     colorPort,     	sensorCOLORFULL)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
task main()
{
	while(1){
		short nAtoDValues[4];
		getColorSensorData(colorPort, colorAtoD,   &nAtoDValues[0]);
		int value;
		value = (nAtoDValues[0]+nAtoDValues[1]+nAtoDValues[2]+nAtoDValues[3])/3;
		nxtDisplayCenteredTextLine(4, "%i", value);
	}

}
