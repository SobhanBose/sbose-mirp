int displayWidth=800;
int displayHeight=400;
float xpos;
float ypos;
int xvel;
int yvel;
boolean up, left, right, down;
float ballRadius=15;
char LEFT='a';
char RIGHT='d';
char UP='w';
char DOWN='s';





void setup()
{
  size(displayWidth, displayHeight);
  xpos=width/2;
  ypos=height/2;
  yvel=0;
  xvel=0;
}


void draw()
{
  background(0);
  drawBall();
  updateVelocity();
  updatePosition();
  Bounce();
}


void drawBall()
{
  ellipse(xpos, ypos, 2*ballRadius, 2*ballRadius);
}


void keyPressed() {
if (key == UP) up = true;
if (key == LEFT) left = true;
if (key == RIGHT) right = true;
if (key ==DOWN) down = true;
}
void keyReleased() {
if (key == UP) up = false;
if (key == LEFT) left = false;
if (key == RIGHT) right = false;
if (key ==DOWN) down = false;
}



void updateVelocity()
{
    println(xpos, ypos);
  if (up)
    yvel-=1;
  if (right)
    xvel+=1;
  if (left)
    xvel-=1;
  if(down)
    yvel+=1;
}


void updatePosition()
{
  xpos+=xvel;
  ypos+=yvel;
}


void Bounce()
{
if(ypos>displayHeight-ballRadius)
{
ypos=displayHeight-ballRadius;
yvel*=-0.95;
}
if(xpos>displayWidth-ballRadius)
{
xpos=displayWidth-ballRadius;
xvel*=-0.95;
}
if(ypos<=0)
{
yvel*=-0.95;
ypos+=ballRadius;
}
if(xpos<=0)
{
xvel*=-0.95;
xpos+=ballRadius;
}
}

  