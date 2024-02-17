Install the DHT Sensor Library:
You need to make sure you have the DHT sensor library installed in your Arduino IDE. Follow these steps to install it if you haven't already:
Open your Arduino IDE.
Go to Sketch > Include Library > Manage Libraries...
In the Library Manager, search for "DHT".
Look for "DHT sensor library by Adafruit" and click the "Install" button.

Verify the Library is Installed:
After installing the library, make sure it's included at the beginning of your sketch. Add this line at the top of your code:

Copy code
#include <DHT.h>
This line tells the compiler to include the necessary declarations and definitions for the DHT sensor library.

Check Library Compatibility:
Ensure that the version of the DHT sensor library you've installed is compatible with your DHT sensors (DHT22 in this case). Usually, the Adafruit DHT sensor library supports most DHT sensors including DHT22.

connection to arduino 

1. gnd wire to gnd wire
2. vcc means 5v
3. data - pin 2 and pin 3
