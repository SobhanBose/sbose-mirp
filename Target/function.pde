void drawTarget(int a, int b)
{
    print("  ",mouseX,mouseY);
    for(int i=n; i>=0; i--)
    {
    if(i%2==0)
    {
      fill(255);
    }
    else
    {
      fill(0);
    }
    ellipse(a, b, 20*i, 20*i);
    }
}