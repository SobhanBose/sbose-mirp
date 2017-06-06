int displayWidth=800;
int displayHeight=400;

int ballRadius=10;
color bgcolor=color(255, 255, 255);
int xpos;
int ypos;
float xvel;
float yvel;
float gravity=0.1;


void setup()
{
  size(displayWidth, displayHeight);
  xpos=width/2;
  ypos=height/2;
  xvel=0;
  yvel=0;
}

void draw()
{
  background(bgcolor);  
  updateVelocity();
  updatePosition();
  drawBall();
  Bounce();
}


void drawBall()
{
  fill(0);
  ellipse(xpos, ypos, 2*ballRadius, 2*ballRadius);
  smooth();
}


void updatePosition()
{
  xpos+=xvel;
  ypos+=yvel;
}

void updateVelocity()
{
  xvel+=gravity;
  yvel+=gravity;
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