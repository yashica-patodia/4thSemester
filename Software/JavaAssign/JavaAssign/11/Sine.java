import java.awt.*;
import java.applet.*;
import java.lang.Math.*;

/*
<applet code="Sine.class" width=900 height=800>
</applet>
*/
public class Sine extends Applet{
    public void paint(Graphics g){
        Dimension d = getSize();
        int xval = d.height/2;
        int yval = d.width/2;
        g.drawLine(0,xval,d.width,xval);
        g.drawLine(yval,0,yval,d.height);
        g.setColor(Color.red);
        for (double x=-yval;x<=yval ;x+=0.5 ) {
            double y = (d.height/2)*(Math.sin(x*3.1415926/180));
            int Y = (int)y;
            int X = (int)x;
            g.drawLine(yval+X,xval-Y,yval+X,xval-Y);
        }
    }
}