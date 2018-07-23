void main_code(void) {


  // Request SW01 to get the weather measurements and store in
  // the various variables
  tempC = SW01.getTempC(); // Temperature in Celcuis
  tempF = SW01.getTempF(); // Temperature in Farenheit
  humidity = SW01.getHumidity(); //Humidity in Percentage
  pressure = SW01.getPressure(); //Pressure in Pascals


  // Display the recoreded data on the OLED screen
  OD01.clear();
  OD01.set2X();
  OD01.print(humidity);
  OD01.println(" RH%");
  OD01.set1X();
  OD01.println("Humidity");
  OD01.println("Breathe on sensor to");
  OD01.println("increase humidity");
  OD01.print("Temperature: ");
  OD01.print(tempC);
  OD01.println(" *C");
  OD01.print("Temperature: ");
  OD01.print(tempF);
  OD01.println(" *F");
  OD01.print("Pressure   : ");
  OD01.print(pressure / 100, 0);
  OD01.print(" hPa");

}

