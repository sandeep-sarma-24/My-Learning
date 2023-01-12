from random import random
import cv2 
import random

img = cv2.imread('intro/iron_man.jpg', -1)

print(img.shape)
# (1080, 1920 ,3) here the categoriarisation is done like (Height, Width, Channel)
# opencv has BGR rather than RGB [0,0,0] ==> [blue, green, red]

for i in range(100):
    for j in range(img.shape[1]):
        img[i][j] = [random.randint(0,255),random.randint(0,255),random.randint(0,255)]

cv2.imshow('Image', img)
cv2.waitKey(0)
cv2.destroyAllWindows()
