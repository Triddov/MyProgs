from turtle import *
from random import randint

tfield = Turtle()
trl1 = Turtle()
trl2 = Turtle()
trl3 = Turtle()
trl4 = Turtle()
w, h = 400, 400
w_end, h_end = 450, 450


tfield.speed(10)
tfield.penup()
tfield.goto(-450,-450)
tfield.pendown()
tfield.pensize(5)
for i in range(4):
    tfield.forward(900)
    tfield.left(90)
tfield.hideturtle()

def made_turtle(t, color):   
    t.color(color)
    t.pensize(3)
    t.shape("turtle")
    t.shapesize(6)
    t.speed(10)
    t.penup()
    t.forward(25)
    
def gameFinished():
    trl1_outside = abs(trl1.xcor()) > w_end or abs(trl1.ycor()) > h_end
    trl2_outside = abs(trl2.xcor()) > w_end or abs(trl2.ycor()) > h_end
    trl3_outside = abs(trl3.xcor()) > w_end or abs(trl3.ycor()) > h_end
    trl4_outside = abs(trl4.xcor()) > w_end or abs(trl4.ycor()) > h_end
    isOutside = trl1_outside or trl2_outside or trl3_outside or trl4_outside
    return isOutside

def rand_move(t):
    t.penup()
    t.goto(randint(-w, w), randint(-h, h))
    t.pendown()
    t.left(randint(0,360))

def catch1(x,y):
    rand_move(trl1)
    
def catch2(x,y):
    rand_move(trl2)

def catch3(x,y):
    rand_move(trl3)

def catch4(x,y):
    rand_move(trl4)

trl1.onclick(catch1)
trl2.onclick(catch2)
trl3.onclick(catch3)
trl4.onclick(catch4)

trl1.left(0)
trl2.left(90)
trl3.left(180)
trl4.left(270)

while gameFinished() == False:
    made_turtle(trl1, "red")
    made_turtle(trl2, "blue")
    made_turtle(trl3, "green")
    made_turtle(trl4, "orange")
   
if gameFinished() == True:
    write('Game Over', font=('Calibri', 40, 'normal'))

hideturtle()
exitonclick()