float previousPosition = 0.0, currentPosition;
float angleError = 0.02;
float angval;
float Kd=0.005;
float Kp=0.0002;
float derivative;
float output;
int   dt=1;
float integral;
float Ki=0.000000000000001;

void solution ()
{
  currentPosition = desiredX-ballX;
  integral=integral+dt*currentPosition;
  derivative=(currentPosition-previousPosition)/dt;
  output=(Kp*currentPosition)+(Ki*integral)+(Kd*derivative);
  previousPosition=currentPosition;
  gotoAngle(output);
  delay(dt);
}