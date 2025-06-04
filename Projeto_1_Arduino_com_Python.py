import serial
import time
from pynput.keyboard import Controller

keyboard = Controller()

try:
    arduino = serial.Serial('COM5', 9600, timeout=1)
    time.sleep(1)
except serial.SerialException:
    print("Erro: Não foi possível abrir a porta COM5.")
    exit()

print("Conectado ao Arduino!")

while True:
    if arduino.in_waiting > 0:
        linha = arduino.readline().decode('utf-8').strip()
        print("Recebido:", linha)

        if linha == "Vermelho":
            keyboard.press('a')
            time.sleep(0.15) 
            keyboard.release('a')
        
        elif linha == "Roxo":
            keyboard.press('s')
            time.sleep(0.15)
            keyboard.release('s')

        elif linha == "Verde":
            keyboard.press('d')
            time.sleep(0.15)
            keyboard.release('d')


        elif linha == "Amarelo":
            keyboard.press('f')
            time.sleep(0.15)
            keyboard.release('f')
