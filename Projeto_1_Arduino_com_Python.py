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
            pyautogui.press("a")

        elif saida == "Roxo": 
            pyautogui.press("s")

        elif saida == "Verde":
            pyautogui.press("d")

        elif saida == "Vermelho":
            pyautogui.press("f")

        elif saida == "Amarelo":
            pyautogui.press("g")

        else:
            None
        
