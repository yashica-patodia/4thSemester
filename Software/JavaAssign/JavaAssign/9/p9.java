import java.awt.*;
import java.applet.*;

public class p9 extends Applet {

  Image picture;

  public void init() {
    picture = getImage(getDocumentBase(),"abc.jpg");
  }

  public void paint(Graphics g) {
    g.drawImage(picture,10,10, this);
    g.drawString("Vivek Gupta",70, 70);
  }

  }
