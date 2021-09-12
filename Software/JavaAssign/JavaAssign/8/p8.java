/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package learn;

/**
 *
 * @author Aurghya Maity
 */
import java.awt.*;
import java.awt.image.*;
import javax.imageio.*;
import java.io.*;

class Circle {

    public static void main(String[] args) {
        try {

            BufferedImage image = new BufferedImage(1200, 1200, BufferedImage.TYPE_INT_ARGB);

            Graphics2D g = image.createGraphics();
            g.setColor(Color.YELLOW);
            g.fillOval(200, 400, 400, 400);
            g.dispose();

            File file = new File("p8_Circle.png");
            ImageIO.write(image, "png", file);
        } catch (Exception e) {
            System.out.println(e);
        }
    }
}
