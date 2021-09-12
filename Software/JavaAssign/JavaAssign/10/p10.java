import java.applet.Applet;
import java.awt.Color;
import java.awt.Graphics;

class Ball
{
  int x,y,radius,dx,dy;
  Color BallColor;
 public Ball(int x,int y,int radius,int dx,int dy,Color bColor)
 {
   this.x=x;
   this.y=y;
   this.radius=radius;
   this.dx=dx;
   this.dy=dy;
   BallColor=bColor;
 }
}
public class p10 extends Applet implements Runnable{
Ball redBall,blackBall;
  public void init()
  {
    redBall=new Ball(80,80,20,2,4,Color.red);
    Thread t=new Thread(this);
    t.start();
  }

 public void paint(Graphics g)
 {
    g.setColor(redBall.BallColor);
    g.fillOval(redBall.x, redBall.y, redBall.radius, redBall.radius);
}
  public void run()
  {
    while(true)
    {
     try
        {
           displacementOperation(redBall);
           Thread.sleep(20);
           repaint();
        }
    catch(Exception e){}
    }
  }
//This method checks the boundary condition of ball movement
public void displacementOperation(Ball ball)
 {
  if(ball.y >= 250 || ball.y <= 0)
  {
    ball.dy=-ball.dy;
  }
  if(ball.x >= 250 || ball.x <= 0)
  {
    ball.dx=-ball.dx;
  }
   ball.y=ball.y-ball.dy;
   ball.x=ball.x-ball.dx;
  }
}
