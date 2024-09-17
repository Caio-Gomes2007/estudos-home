#Participantes: Caio Fernandes Gomes , Sofia Ferreira e Rodrigo Soares
import turtle 
turtle.bgcolor("white")
Ponto = turtle.Turtle()

Ponto.pensize(2)
Ponto.speed(100)
for number in range(400):
    Ponto.forward(number)
    Ponto.right(89)
    Ponto.pencolor('red')
    
Ponto.penup()
Ponto.goto(5,5)
Ponto.pendown()


for number in range(400):
    Ponto.forward(number)
    Ponto.left(89)
    Ponto.pencolor('black')
turtle.done()
