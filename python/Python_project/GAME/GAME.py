import pygame
import time
import random

pygame.init()

# Define colors
white = (255, 255, 255)
black = (0, 0, 0)
red = (255, 0, 0)
green = (0, 255, 0)
blue = (0, 0, 255)

# Set the width and height of the game window
window_width = 1500
window_height = 700

# Set the size of each grid block
block_size = 50

# Set the speed of the snake
snake_speed = 4

# Initialize the game window
game_display = pygame.display.set_mode((window_width, window_height))
pygame.display.set_caption('Snake Game AJAYSINGH8X')

clock = pygame.time.Clock()

font_style = pygame.font.SysFont(None, 50)
score_font = pygame.font.SysFont(None, 35)

def our_snake(block_size, snake_list):
    for x in snake_list:
        pygame.draw.rect(game_display, green, [x[0], x[1], block_size, block_size])

def message(msg, color):
    mesg = font_style.render(msg, True, color)
    game_display.blit(mesg, [window_width / 6, window_height / 3])

def game_loop():
    game_over = False
    game_close = False

    # Initial position of the snake
    x1 = window_width / 2
    y1 = window_height / 2

    # Initial movement direction of the snake
    x1_change = 0
    y1_change = 0

    # Create an empty list to store the snake's body
    snake_list = []
    snake_length = 1

    # Generate random coordinates for the food
    food_x = round(random.randrange(0, window_width - block_size) / 50.0) * 50.0
    food_y = round(random.randrange(0, window_height - block_size) / 50.0) * 50.0

    while not game_over:

        while game_close == True:
            game_display.fill(black)
            message("                   Game Over! Press Q-Quit or C-Play Again", red)
            pygame.display.update()
            

            for event in pygame.event.get():
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_q:
                        game_over = True
                        game_close = False
                    if event.key == pygame.K_c:
                        game_loop()

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                game_over = True
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT:
                    x1_change = -block_size
                    y1_change = 0
                elif event.key == pygame.K_RIGHT:
                    x1_change = block_size
                    y1_change = 0
                elif event.key == pygame.K_UP:
                    y1_change = -block_size
                    x1_change = 0
                elif event.key == pygame.K_DOWN:
                    y1_change = block_size
                    x1_change = 0

        if x1 >= window_width or x1 < 0 or y1 >= window_height or y1 < 0:
            game_close = True
        x1 += x1_change
        y1 += y1_change
        game_display.fill(black)
        pygame.draw.rect(game_display, white, [food_x, food_y, block_size, block_size])
        snake_head = []
        snake_head.append(x1)
        snake_head.append(y1)
        snake_list.append(snake_head)
        if len(snake_list) > snake_length:
            del snake_list[0]

        for x in snake_list[:-1]:
            if x == snake_head:
                game_close = True

        our_snake(block_size, snake_list)

        pygame.display.update()

        if x1 == food_x and y1 == food_y:
            food_x = round(random.randrange(0, window_width - block_size) / 50.0) * 50.0
            food_y = round(random.randrange(0, window_height - block_size) / 50.0) * 50.0
            snake_length += 1


            

        clock.tick(snake_speed)

    pygame.quit()
    quit()

game_loop()




