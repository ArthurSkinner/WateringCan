from influxdb import InfluxDBClient
import serial

client = InfluxDBClient(host='localhost', port=8086)
client.create_database('wateringcan')
client.get_list_database()
client.switch_database('wateringcan')

ser = serial.Serial('/dev/ttyACM0', 9600)
i = 0 

while 1: 
    if(ser.in_waiting >0):
        line = ser.readline()

#        print(type(line))

        try:
            line = line.strip()
            line = line.decode()
            data = [line] 
            print(data)
            client.write(data, {'db':"wateringcan"},protocol="line")
        except:
            print("got an error")


#        print(line)
#        client.write_points(line)
        
        
#data = ["moisture,window=one onion=10"]        
#client.write(data, {'db':"wateringcan"},protocol="line")