package sample;
/*
    BD FLAG
    By Sabbir Mollah
*/

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.geometry.Pos;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Rectangle;
import javafx.stage.Stage;

public class Main extends Application {

    @Override
    public void start(Stage primaryStage) {

        Rectangle rect = new Rectangle(1000,600);
        Color green = Color.rgb(0,106,78);
        rect.setFill(green);

        Circle circle = new Circle(200);
        circle.setCenterX(450);
        circle.setCenterY(300);
        Color red = Color.rgb(244,42,65);
        circle.setFill(red);

        Group root = new Group();
        root.getChildren().add(rect);
        root.getChildren().add(circle);

        Scene scene = new Scene(root, 1000, 600);

        primaryStage.setTitle("Amar Shonar Bangla");
        primaryStage.setScene(scene);
        primaryStage.show();
    }


    public static void main(String[] args) {
        launch(args);
    }

}
