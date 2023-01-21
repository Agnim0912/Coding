import pygame
pygame.init()
window_x=900
window_y=700

window=pygame.display.set_mode((window_x,window_y))

pygame.display.set_caption("my new game")
icon =pygame.image.load("icon.png")
pygame.display.set_icon(icon)

spaceship=pygame.image.load("icon.png")
spaceship_x=500
spaceship_y=400

bg=pygame.image.load("Background.png")
def display_spaceship(x, y):
    window.blit(spaceship, (x,y))

gameon=True
while gameon:
    for even in pygame.event.get():
        if even.type==pygame.QUIT:
            gameon=False
    
    keys=pygame.key.get_pressed()
    if keys[pygame.K_LEFT] and spaceship_x>10:
        spaceship_x-=1
    if keys[pygame.K_RIGHT] and spaceship_x<700:
        spaceship_x+=1

    if keys[pygame.K_UP]:
        spaceship_y-=1
    if keys[pygame.K_DOWN]:
        spaceship_y+=1
    display_spaceship(spaceship_x,spaceship_y)
    pygame.display.update()
pygame.quit()