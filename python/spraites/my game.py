from time import sleep
import pygame as pg

pg.init()

win = pg.display.set_mode((1000, 670))
pg.display.set_caption("First Game")

walkRight = [pg.image.load('right_1.png'),
pg.image.load('right_2.png'), pg.image.load('right_3.png'), 
pg.image.load('right_4.png'), pg.image.load('right_5.png'),
pg.image.load('right_6.png')]

walkLeft = [pg.image.load('left_1.png'), 
pg.image.load('left_2.png'), pg.image.load('left_3.png'), 
pg.image.load('left_4.png'), pg.image.load('left_5.png'), 
pg.image.load('left_6.png')]

bg = pg.image.load("white_home1.jpg")
bg.set_colorkey((0,0,0))
playerStand = pg.image.load("tramp.png")


YOURXP = 100
clock = pg.time.Clock()
speed = 5
height, width = 71, 60
x, y = 50, 595

left, right = False, False
animCount = 0

class Ball():
    def __init__(self, x, y, radius, color, facing):
        self.x = x
        self.y = y
        self.color = color
        self.radius = radius
        self.facting = facing
        self.vel = 6 * facing

    def draw(self, win):
        pg.draw.circle(win, self.color, (self.x, self.y), self.radius)

def drawWin():
    global animCount
    win.blit(bg, (0,0))

    if animCount + 1 > 30:
        animCount = 0
    if left:
        win.blit(walkLeft[animCount // 5], (x,y))
        animCount += 1 
    elif right:
        win.blit(walkRight[animCount // 5], (x,y))
        animCount += 1 
    else:
        win.blit(playerStand, (x,y))

    for bullet in bullets:
        bullet.draw(win)
        
    pg.display.update()

JumpNow = False
jumpcount = 10

def jumping():
    global JumpNow
    global keys
    global jumpcount
    global y

    if not(JumpNow):
        if keys[pg.K_SPACE]:
            JumpNow = True
    elif jumpcount >= -10:
        y -= jumpcount * 2
        jumpcount -= 1
    else:
        JumpNow = False
        jumpcount = 10

bullets = []
lastMove = 'right'

def removalBullets():
    global bullets
    for bullet in bullets:
        if bullet.x < 1000 and bullet.x > 0:
            bullet.x += bullet.vel
        else:
            bullets.pop(bullets.index(bullet))

def left_and_right():
    global x
    global left
    global right
    global keys
    global animCount
    global lastMove

    if keys[pg.K_LEFT] and x > 10:
        x -= speed
        left, right = True, False
        lastMove = 'left'
    elif keys[pg.K_RIGHT] and x < 990 - width:
        x += speed
        left, right = False, True
        lastMove = 'right'
    else:
        left, right = False, False
        animCount = 0    

def sideShots():
    global keys
    global lastMove
    global x
    global y
    global bullets
    global width
    global height

    if keys[pg.K_f]:
        if lastMove == "right":
            facing = 1
        else:
            facing = -1
        sleep(0.02)

        if len(bullets) < 5:
            bullets.append(Ball(round(x + width // 2), round(y + height // 2), 5, (85,0,85), facing))

def score():
    global YOURXP
    my_font = pg.font.Font(None, 36)
    my_text = my_font.render(str(YOURXP), True,(180, 0, 0))
    win.blit(my_text, (0,0))

while YOURXP > 0:
    clock.tick(30)

    for event in pg.event.get():
        if event.type == pg.QUIT:
            YOURXP = 0
    
    removalBullets()
    keys = pg.key.get_pressed()
    sideShots()

    score()
    left_and_right()
    jumping()
    drawWin()

pg.quit()
