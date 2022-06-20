import numpy as np 
import matplotlib.pyplot as plt

'''Setting''' 
#Line no.1 
x1 = 0 
y1 = 0 
x2 = 1 
y2 = 6 

#Line no.2 
x3 = 1 
y3 = 6 
x4 = 10 
y4 = 6

#Line no.1 - Length 
Line1Len = ((x2-x1)**2+(y2-y1)**2)**0.5

#Line no.2 - Length 
Line2Len = ((x4-x3)**2+(y4-y3)**2)**0.5

#Internal division of Line no.1 
m1 = np.arange(0, Line1Len) 
n1 = Line1Len - m1 
p1x = (m1*x2+n1*x1)/(m1+n1) 
p1y = (m1*y2+n1*y1)/(m1+n1)

#Internal division of Line no.2
m2 = np.arange(0, Line2Len) 
n2 = Line2Len - m2 
p2x = (m2*x4+n2*x3)/(m2+n2) 
p2y = (m2*y4+n2*y3)/(m2+n2)a

#Internal division of Line no.1 & no.2 
m3 = np.arange(0, Line2Len)
n3 = Line2Len - m3
p3x = (m3*x4+n3*x3)/(m3+n3)
p3y = (m3*y4+n3*y3)/(m3+n3)

plt.plot(p1x,p1y) 
plt.plot(p2x,p2y)

plt.show()