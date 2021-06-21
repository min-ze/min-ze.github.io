height = input("Height: ")
height = int(height)
while height < 1 or height > 8:
    height = input("Height: ")
    height = int(height)
    
dots = height - 1
width = 1

for i in range(height):
    for j in range(dots):
        print("." , end = '')
        
    for k in range(width):
        print("#" , end = '')
        
    dots -= 1
    width += 1
    print()

    
