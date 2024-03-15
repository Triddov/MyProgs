from turtle import *
from random import randint
from time import sleep

trl1 = Turtle()
trl2 = Turtle()
w, h = 300, 300
trl1.points, trl2.points = 0, 0

def made_turtle(t, color, shape):   
    t.color(color)
    t.shape(shape)
    t.shapesize(1.2)
    t.speed(10)

def rand_move1():
    made_turtle(trl1, "red", "turtle")
    trl1.penup()
    trl1.goto(randint(-w, w), randint(-h, h))
    trl1.pendown()

def rand_move2():
    made_turtle(trl2, "blue", "turtle")
    trl2.penup()
    trl2.goto(randint(-w, w), randint(-h, h))
    trl2.pendown()

def catch1(x, y):
    trl1.write('A', font=('Arial', 14, 'normal'))
    rand_move1()
    trl1.points += 1
    
def catch2(x, y):
    trl2.write('B', font=('Arial', 14, 'normal'))
    rand_move2()
    trl2.points += 1


trl1.onclick(catch1)
trl2.onclick(catch2)

while trl1.points < 3 or trl2.points < 3:
    sleep(0.5)
    rand_move1()
    rand_move2()
    
trl1.hideturtle()
trl2.hideturtle()
