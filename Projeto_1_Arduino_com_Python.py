import serial
import time
import pyautogui

arduino= serial.Serial('COM9',9600)
time.sleep(0.1)

while True:
    if arduino.in_waiting > 0:
        linha = arduino.readline().decode('utf-8').strip()
       
        saida = linha
        if saida == "Azul":
            pyautogui.write("a")

        elif saida == "Roxo": 
            pyautogui.write("s")

        elif saida == "Verde":
            pyautogui.write("d")

        elif saida == "Vermelho":
            pyautogui.write("f")

        elif saida == "Amarelo":
            pyautogui.write("g")

        else:
            None
        