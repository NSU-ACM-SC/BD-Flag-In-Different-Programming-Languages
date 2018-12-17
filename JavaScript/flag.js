var canvas = document.getElementById('bdflag'); // create a canvas variable

canvas.width = window.innerWidth; // creating a height and width
canvas.height = window.innerHeight;
var cont = canvas.getContext('2d');

cont.fillStyle = '#006747';
cont.fillRect(0, 0, 1000, 600); // fillRect(x-coordinate, y-coordinate, width, height)

cont.beginPath();
cont.arc(450, 300, 200, 0, 2 * Math.PI); // arc(x,y,round,sAngle,eAngle, counterClockWise)
cont.fillStyle = '#DA291C';
cont.fill();