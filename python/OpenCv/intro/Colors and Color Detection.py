from cgitb import small
from tkinter import Frame
import numpy as np 
import cv2 

cap = cv2.VideoCapture(0) 

while True:
    ret, frame = cap.read()
    width = int(cap.get(3))
    height = int(cap.get(4))

    # intro 
    # RGB = Red ,Green , blue 
    # BGR = blue , Green , Red
    # HSV = Hue Saturation & Lightness/Brightness

    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)
    lower_blue = np.array([80,50,50])
    upper_blue = np.array([140,255,255])

    mask = cv2.inRange(hsv, lower_blue, upper_blue) # filter

    result = cv2.bitwise_and(frame, frame, mask=mask)

    # cv2.imshow('frame', mask)
    cv2.imshow('frame', result)

    if cv2.waitKey(1) == ord('q'):
        break

cap.release() # release the camera resource 
cv2.destroyAllWindows() 
