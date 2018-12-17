# Execute this code:
# python bdFlag.py
# Written by Sabbir Mollah
# Makes a svg file of Bangladesh National Flag

from pyx import canvas,path,style,color,text

bottle_green = color.rgbfromhexstring( "#006A4E" )
imperial_red = color.rgbfromhexstring( "#F42A41" )

c = canvas.canvas()
c.fill(path.rect(0, 0, 50, 30), [bottle_green])
c.fill(path.circle(22.5,15,10), [imperial_red])

c.writeSVGfile("bdFlag")