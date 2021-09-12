import java.awt.*;
import java.applet.*;
/*
<applet code = "Rectangle.class" width = 400 height = 400>
</applet>
*/
public class Rectangle extends Applet
{
	public void paint(Graphics g)
	{
		g.setColor(Color.red);
		g.drawString("Welcome",70,100);
		g.setColor(Color.blue);
		g.drawRect(50, 80, 200, 150);
	}
}