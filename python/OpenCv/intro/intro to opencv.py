import cv2 
# modes for image 
# -1 /  cv2.IMREAD_COLOR : Loads a color image, any transparency will be neglected and it is default flag
# 0  /  cv2.IMREAD_GRAYSCALE : loads image in grayscale 
# 1  /  cv2.IMREAD_UNCHANGED : Loads image as such including alpha channel 
img = cv2.imread('intro/iron_man.jpg', -1)

img = cv2.resize(img, (0,0), fx= 0.2, fy = .2) # resizing a image 

img = cv2.rotate(img, cv2.ROTATE_90_CLOCKWISE) # rotating a image in clockwise in 90 degrees

# cv2.imwrite('new_img.jpg', img) # writing/creating a new file 

cv2.imshow('Image',img) # Display image
cv2.waitKey(0) # wait for key press for to close in infinity time(0) sec .
cv2.destroyAllWindows()




