import cv2 

img = cv2.imread('E:/Languages/python/OpenCv/Computer-Vision-with-Python/DATA/00-puppy.jpg')

while True: 
    cv2.imshow('Puppy', img)

    # If we've waited at least 1ms AND we've pressed the ESC
    if cv2.waitKey(1) & 0xFF == 27:
        break

# destroy all windows 
cv2.destroyAllWindows() 
