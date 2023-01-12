from cgitb import small
from tkinter import Frame
import numpy as np 
import cv2 

cap = cv2.VideoCapture(0) 


while True:
    ret, frame = cap.read()
    width = int(cap.get(3))
    height = int(cap.get(4))
    # diagonal 1
    img = cv2.line(frame, (0,0), (width,height), (255,0,0), 10) # cv2.line(source image, (starting pos), (ending pos), (color), (thickness))
    # diagonal 2
    img = cv2.line(frame, (0,height), (width,0), (0,255,0), 5) 
    # rectangle 
    img = cv2.rectangle(img, (100,100), (200,200), (128,128,128), 5) # cv2.rectangle(source image, (center pos), (radius), (color), (thickness))
    # circle 
    img = cv2.circle(img, (300,300), 60 , (0,0,255), 3) # cv2.circle(source image, (centre pos), (radius), (color), (thickness))
    # text 
    font = cv2.FONT_HERSHEY_SIMPLEX
    img = cv2.putText(img, 'Sandeep is Great', (200, height -10), font,1, (0,0,0,), 5, cv2.LINE_AA) # positon == Bottom-left corner of the text string in the image.
    # putText(img, text, org, fontFace, fontScale, color[, thickness[, lineType[, bottomLeftOrigin]]])
    cv2.imshow('frame', frame)
    

    if cv2.waitKey(1) == ord('q'):
        break

cap.release() # release the camera resource 
cv2.destroyAllWindows()