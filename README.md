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

board = [[' ' for x in range (3)] for y in range(3)]

#배열의 값을 출력하는 함수
def CheckAry():
    for i in range(3):
        for j in range(3):
            print(board[i][j],end="")
        print("")
        
        
while True:
    #게임 보드를 그린다.
        for r in range(3):
            print("  " + board[r][0] + "|  " + board[r][1] + "|  " + board[r][2])
            if (r!= 2):
                print("---|---|---")

        #사용자로부터 좌표를 입력받는다.
        x = int(input("다음 수의 x좌표를 입력하시오: "))
        y = int(input("다음 수의 y좌표를 입력하시오: "))

        #사용자가 입력한 좌표를 검사한다.
        if x >= 3 or y >= 3 or board[x][y] != ' ':
            print("잘못된 좌표입니다!")
            continue
        else:
            board[x][y] = 'X'

        #컴퓨터가 놓을 위치를 결정한다. 첫 번째로 발견하는 비어있는 칸에 놓는다.
        done = False
        
        #사용자나 컴퓨터의 수에 연속된 결과가 있을경우
        for i in range(2):
            for j in range(2):
                if (board[i][j] == board[i+1][j] or board[i][j] == board[i-1][j] or board[i][j+1] == board[i][j-1] or )

        #사용자나 컴퓨터의 이길만한 수가 없을 경우
        else:
            for i in range(3):
                for j in range(3):
                    if board[i][j] == ' ' and not done:
                        board[i][j] = "O"
                        done=True
                        break
            CheckAry()



