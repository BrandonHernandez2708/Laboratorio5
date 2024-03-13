import serial 
import time 

puerto = 'COM3'  
velocidad = 9600  
ser = serial.Serial(puerto, velocidad, timeout=1) 
time.sleep(2) 


def enviar_comando(comando):
    ser.write(comando.encode())
    time.sleep(0.1) 

def recibir_respuesta():
    respuesta = ser.readline().decode('utf-8').strip() 
    print('Respuesta del Arduino:', respuesta)

while True:
    entrada_usuario = input("Ingrese 0 para apagar el LED, 1 para encender el LED, o 'exit' para salir: ")
    if entrada_usuario == 'exit':
        break  # Salir del bucle si el usuario ingresa 'exit'
    elif entrada_usuario == '0' or entrada_usuario == '1':
        enviar_comando(entrada_usuario + '\n')
        recibir_respuesta()
    else:
        print("Entrada no válida. Por favor ingrese '0', '1' o 'exit'.")

ser.close()
