# HydraSafe

Components: 

- **Microcontroller** : 
- Arduino Uno or Mega (or Raspberry Pi 4 for advanced features) 
- **Temperature Sensors** : 
- DHT22/AM2302 (for outdoor temperature and humidity) 
- **Cooling/Heating Module** : 
- Peltier Module (TEC1-12706) 
- **Proximity Sensor** : 
- HC-SR04 Ultrasonic Sensor 
- **Alert System**
- Active Buzzer 
- RGB LED or LED Strip 
- **Power Supply**  
- 12V 5A Power Adapter (for Peltier ) 
- 5V USB Power Bank or Adapter (for microcontroller and sensors) 
- **Miscellaneous** : 
- Water Reservoir/Tank (1-2L capacity) 
- Tubing and Fittings 
- Push Button or Touch Sensor 
- Breadboard 
- Jumper Wires 

Project Objectives: 

1. ***Temperature Optimization*** 

**Goal:** Deliver water at the most refreshing temperature based on ambient conditions. 

- Automatically adjust water temperature (cooling or heating) in real-time based on outdoor ambient conditions to ensure optimal refreshment—e.g., cooler water on hot days for better quenching and warmer on cold days for comfort. 
2. ***Safety and Hygiene*** 
- Detect and alert users via audible/visual notifications if a glass or container is placed too close to the filter for an extended period (e.g., >10 seconds), preventing potential contamination from drips, spills, or bacterial buildup. 
3. ***Sustainability and Efficiency*** 

**Goal:** Reduce environmental impact while maximizing performance. 

- Minimize energy consumption by only activating heating/cooling cycles when needed, based on external temp data, targeting a 20-30% reduction in power usage compared to static systems. 

PELTIER MODULE: 

We can use this same component for both cooling and heating :
![Aspose Words 2fc07456-589b-4ca0-904c-697831b12423 001](https://github.com/user-attachments/assets/49cfef16-4e12-4f66-b121-128d40e15892)

![](Aspose.Words.2fc07456-589b-4ca0-904c-697831b12423.001.jpeg)

Here is sample circuit where, Peltier module is replaced with two Led's  
![Aspose Words 2fc07456-589b-4ca0-904c-697831b12423 003](https://github.com/user-attachments/assets/40af8b32-dec6-4544-aefb-9baf81374fa4)
![Aspose Words 2fc07456-589b-4ca0-904c-697831b12423 002](https://github.com/user-attachments/assets/a18a921b-ccc5-46ee-a7db-8f7f96b52586)

![](Aspose.Words.2fc07456-589b-4ca0-904c-697831b12423.002.jpeg)

![](Aspose.Words.2fc07456-589b-4ca0-904c-697831b12423.003.jpeg)

[code here ](https://github.com/siddhu232222/hydrasafe/blob/main/sample.ino)

