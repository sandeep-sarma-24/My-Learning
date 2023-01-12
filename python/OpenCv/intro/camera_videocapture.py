from cgitb import small
from tkinter import Frame
import numpy as np 
import cv2 

cap = cv2.VideoCapture(0) 


# if u have multiple cameras then put a number or default will be the videocapture(0)
# this code is for single video camera recording (
# while True: 
#     ret, frame = cap.read() 

#     cv2.imshow('frame', frame)

#     if cv2.waitKey(1) == ord('q'): 
#         break             )


while True:
    ret, frame = cap.read()
    width = int(cap.get(3))
    height = int(cap.get(4))

    image = np.zeros(frame.shape, np.uint8)
    smaller_frame = cv2.resize(frame, (0, 0), fx=0.5, fy=0.5)
    image[:height//2, :width//2] = smaller_frame
    image[height//2:, :width//2] = smaller_frame
    image[:height//2, width//2:] = smaller_frame
    image[height//2:, width//2:] = smaller_frame

    cv2.imshow('frame', image)

    if cv2.waitKey(1) == ord('q'):
        break

cap.release() # release the camera resource 
cv2.destroyAllWindows()