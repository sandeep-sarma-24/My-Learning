from email import message
from turtle import circle
import pygame 
import numpy as np

# initialise the pygame 
pygame.init()

# create the screen 
screen = pygame .display.set_mode((600,600))
BG_color = (192,192,192)
Red = (255,0,0)
line_Width = 15
line_Color = (23,145,135)
screen.fill(BG_color)
board_Rows = 3 
board_Col = 3
circle_radius = 60
circle_width = 15
cross_width = 25
space = 55
cross_color = (66,66,66)
circle_color = (239,231,200)

#Title
pygame.display.set_caption("Tic-Tac-Toe")

# board 
board = np.zeros((board_Rows,board_Col))


#lines
# pygame.draw.line(screen ,Red , (10,10), (300,300),10)

# Functions 
def draw_lines():
    # 1st Hor
    pygame.draw.line(screen ,line_Color , (0,200), (600,200),line_Width)
    # 2nd Hor
    pygame.draw.line(screen ,line_Color , (0,400), (600,400),line_Width)
    # 3rd Hor
    pygame.draw.line(screen ,line_Color , (0,600), (600,600),line_Width)
    # 1st Ver
    pygame.draw.line(screen ,line_Color , (200,0), (200,600),line_Width)
    # 2nd Ver
    pygame.draw.line(screen ,line_Color , (400,0), (400,600),line_Width)

def mark(row ,col ,player): 
    board[row][col] = player

def available(row,col):
    if board[row][col] == 0:
        return True
    else:
        return False

def is_board_full():
    for row in range(board_Rows):
        for col in range(board_Col):
            if board[row][col] == 0:
                return False
    
    return True

def draw_Figure():
    for row in range(board_Rows):
        for col in range(board_Col):
            if board[row][col] == 1:
                pygame.draw.circle(screen, Red, (int(col * 200 + 100),int(row* 200 + 100)), circle_radius, circle_width)
            elif board[row][col] == 2:
                pygame.draw.line(screen , cross_color , (col *200 + space,row *200 + 200 - space), (col *200 + 200 - space, row *200 + space), cross_width)
                pygame.draw.line(screen , cross_color , (col *200 + space,row * 200 + space), (col *200  + 200 - space, row * 200 + 200 - space), cross_width)

def check_wIn(player): 
    # vertical win 
    for col in range(board_Col):
        if board[0][col] == player and board[1][col] == player and board[2][col] == player: 
            draw_vertical_win_line(col, player)
            return True

    # horizontal win 
    for row in range(board_Rows):
        if board[row][0] == player and board[row][1] == player and board[row][2] == player: 
            draw_horizontal_win_line(row,player)
            return True

    # diagonal win Asc
    if board[2][0] == player and board[1][1] == player and board[0][2] == player: 
        draw_asc_diagonal(player)
        return True

    # diagonal win Desc
    if board[0][0] == player and board[1][1] == player and board[2][2] == player:
        draw_des_diagonal(player)
        return True 

def draw_vertical_win_line(col,player):
    posX = col * 200 + 100

    if player == 1:
        color = circle_color
    elif player == 2:
        color = cross_color
    
    pygame.draw.line(screen, color, (posX,15), (posX, 600 -15),15)

def draw_horizontal_win_line(row,player):
    posY = row * 200 + 100

    if player == 1:
        color = circle_color
    elif player == 2:
        color = cross_color
    
    pygame.draw.line(screen, color, (15, posY), (600 - 15 , posY),15)

def draw_asc_diagonal(player):
    if player == 1:
        color = circle_color
    elif player == 2:
        color = cross_color

    pygame.draw.line(screen, color, (15 , 600 -15), (600 - 15, 15) , 15)

def draw_des_diagonal(player):
    if player == 1:
        color = circle_color
    elif player == 2:
        color = cross_color

    pygame.draw.line(screen, color, (15 , 15),(600 - 15, 600 -15) ,15)

def restart(): 
    screen.fill(BG_color)
    draw_lines()
    for row in range(board_Rows):
        for col in range(board_Col):
            board[row][col] = 0

            
draw_lines()

player = 1
game_over = False 

# game loop
running = True 
while running: 
    for event in pygame.event.get(): 
        if event.type == pygame.QUIT:
            running = False
        
        if event.type == pygame.MOUSEBUTTONDOWN and not game_over:
            
            mouseX = event.pos[0] # x
            mouseY = event.pos[1] # y

            click_row = int(mouseY//200)
            click_col = int(mouseX//200)

            if available(click_row, click_col):
                if player == 1: 
                    mark(click_row,click_col,1)
                    if check_wIn(player):
                        game_over = True
                    player = 2


                elif player == 2:
                    mark(click_row, click_col,2)
                    if check_wIn(player):
                        game_over = True
                    player = 1
                    
                draw_Figure()
        
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_r:
                restart()
                
    pygame.display.update()
    






