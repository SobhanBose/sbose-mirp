int displayWidth=1000;
int displayHeight=500;

int n=5;


void setup()
{
  size(displayWidth, displayHeight);
}


void draw()
{
  if(mousePressed)
  {
  drawTarget(mouseX, mouseY);
  delay(200);
  }
}
  