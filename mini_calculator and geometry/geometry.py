import turtle

def draw_triangle(side_length):
    for _ in range(6):
        turtle.forward(side_length)
        turtle.left(60)

def draw_square(side_length):
    for _ in range(4):
        turtle.forward(side_length)
        turtle.left(90)

def draw_circle(radius):
    turtle.circle(radius)

def main():
    turtle.speed(1)  # Set turtle speed to slow
    
    # Ask the user for input
    triangle_size = int(input("Enter the side length of the triangle: "))
    square_size = int(input("Enter the side length of the square: "))
    circle_radius = int(input("Enter the radius of the circle: "))

    # Draw a triangle
    turtle.penup()
    turtle.goto(-150, 100)
    turtle.pendown()
    draw_triangle(triangle_size)
    
    #draw circle
    #turtle.penup()
    turtle.goto(150, 100)
    turtle.pendown()
    draw_circle(circle_radius) 
    # Draw a square
    turtle.penup()
    turtle.goto(0, 100)
    turtle.pendown()
    draw_square(square_size)
    
    # Draw a circle
    turtle.penup()
    turtle.goto(150, 100)
    turtle.pendown()
    draw_circle(circle_radius)

    turtle.done()

if __name__ == "__main__":
    main()