import numpy as np
import cv2
import serial  
import time

arduino = serial.Serial('COM11', 9600)   # create serial object named arduino

cap = cv2.VideoCapture(0)

while(True):
    # Capture frame-by-frame
    ret, frame = cap.read()

    frame = cv2.flip(frame, 1)
   
    height, width, channels = frame.shape

    frame=frame[100:400,200:500]
    color = frame[10, 10]
    print(color)
    if(color[0]<70):
    	command=str(0)
    	arduino.write(command.encode())

    if(color[0]>100):
        if(color[0]<200):
        	command=str(180)
        	arduino.write(command.encode())
    time.sleep(2)     
    # Display the resulting frame
    cv2.imshow('frame',frame)
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# When everything done, release the capture
cap.release()
cv2.destroyAllWindows()