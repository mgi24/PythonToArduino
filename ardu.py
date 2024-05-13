#JANGAN NAMAKAN FILENYA serial.py!!!
#pip uninstall serial
#pip install pyserial
import serial.tools.list_ports

#cek daftar port dlu
ports = serial.tools.list_ports.comports()
portlist = []
for port in ports:
    portlist.append(str(port))
    print(str(port))

#klo udah tau portnya ketik di port= dibawah
arduino = serial.Serial(port= 'COM6', baudrate=115200, timeout=0.1)

#kirim dan terima data disini
while True:    
    kirim = input("Kirim ini ke arduino: ")
    arduino.write(bytes(f"{kirim}", 'utf-8'))
    terima = str(arduino.readline(),'utf-8')
    print(terima);