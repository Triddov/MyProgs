from turtle import *
from random import randint
from time import sleep

def start_race(t, x, y, color):
    t.color(color)
    t.shapesize(1.2)
    t.shape("turtle")
    t.penup()
    t.goto(x,y)

def field(size, color):
    tfield = Turtle()
    tfield.speed(20)
    tfield.color(color)
    tfield.pensize(size)
    x = -600
    y = 250
    tfield.hideturtle()
    tfield.right(90)
    for i in range(25):
        tfield.penup()
        tfield.goto(x,y)
        tfield.pendown()
        x += 50
        tfield.forward(500)

field(2,"green")
t1 = Turtle()
t2 = Turtle()
t3 = Turtle()
t4 = Turtle()

FINISH = False

while not FINISH:
    finish = 600

    start_race(t1, -620, 75, "red")
    start_race(t2, -620, 25, "blue")
    start_race(t3, -620, -25, "green")
    start_race(t4, -620, -75, "orange")
    
    while finish > t1.xcor() and finish > t2.xcor() and finish > t3.xcor() and finish > t4.xcor():

        t1_forward = randint(3,9)
        t2_forward = randint(3,9)
        t3_forward = randint(3,9)
        t4_forward = randint(3,9)

        if randint(1,12) == 1:
            t1_forward += 6
        elif randint(1,12) == 2:
            t2_forward += 6
        elif randint(1,12) == 3:
            t3_forward += 6
        elif randint(1,12) == 4:
            t4_forward += 6

        t1.forward(t1_forward)
        t2.forward(t2_forward)
        t3.forward(t3_forward)
        t4.forward(t4_forward)
    sleep(3)
    