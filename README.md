주제 선정
========
> # 수학 :    
>   ### 베지에 곡선   
> | Q. 내분점 구하는 공식을 이용해 베지에 곡선 그리기    
>   - Q1.어도비 곡선 / 텍스트 쓸때 베지어 곡선      
> # 과학 :    
>   ### 유니티/언리얼로 물리 시뮬레이션 하기   
> | Q. 무한한 공간에서 떨어트려도 가속도는 계속 끝없이 일정하게 증가 할까?   
>   - Q1.게임 포탈의 무한 포탈처럼 계속 떨어지는 상황에서 가속도는 끝없이 증가할까?

베지에 곡선 코드 (짜는중)
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
p2y = (m2*y4+n2*y3)/(m2+n2)

#Internal division of Line no.1 & no.2
m3 = np.arange(0, Line2Len)
n3 = Line2Len - m3
p3x = (m3*x4+n3*x3)/(m3+n3)
p3y = (m3*y4+n3*y3)/(m3+n3)




plt.plot(p1x,p1y)
plt.plot(p2x,p2y)

plt.show()
