import pygame
pygame.init()
surf = pygame.display.set_mode((400, 450))
run = True
clock = pygame.time.Clock()
while run:
    clock.tick(60)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            run = False
    surf.fill((255, 0, 0))
    #surf.fill(pygame.Color(255, 0, 0))
    pygame.display.update()