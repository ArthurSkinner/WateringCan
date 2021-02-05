# WateringCan
Water Monitor
Aim: To learn and develop my coding knowledge through a project to automate the watering of indoor vegetable plants.

Using an arduino to collect data from 5 moisture sensors, format the data, and print serial. This serial is then read by a Raspberry Pi which is connected via USB to the Arduino, and commits the live data to an InfluxDB database using a python script. Using Grafana, I can then display my live readings from the Pi onto a monitor or TV (as seen below).

![](Graph.jpg)
