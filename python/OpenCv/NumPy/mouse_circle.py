import cv2
import numpy as np 

## FUNCTION ## 

def draw_circle(event, x, y, flags, param):

    if event == cv2.EVENT_LBUTTONDOWN: # left button of mouse
        cv2.circle(img, (x,y), 100, (0,255,0), -1)
        # (function) circle(img: Mat, center: Any, radius: Any, color: Any, thickness: ... = ..., lineType: ... = ..., shift: ... = ...) 

    elif event == cv2.EVENT_RBUTTONDOWN: # right button of mouse
        cv2.circle(img, (x,y), 100, (255,0,0), -1)
# callingback() the window name
cv2.namedWindow(winname = 'my_drawing')

# callingback() the mouse function and using the draw_circle function
cv2.setMouseCallback('my_drawing', draw_circle)

## SHOWING IMAGE WITH OPENCV 

img = np.zeros((512,512,3),np.int8)

# Opening and Closing the window
while True:
    cv2.imshow('my_drawing', img)
    
    if cv2.waitKey(20) & 0xFF == 27:
        break
cv2.destroyAllWindows