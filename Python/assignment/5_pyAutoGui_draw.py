import pyautogui
from time import sleep

pyautogui.FAILSAFE = False
rows = int(input())

with open("draw.txt", "w"):
    sleep(3)
    for i in range(1, rows+1):
        for j in range(i):
            pyautogui.write("#", interval=0.1)
        pyautogui.write("\n", interval=0.1)
